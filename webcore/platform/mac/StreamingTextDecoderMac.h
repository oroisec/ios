/*
 * Copyright (C) 2004, 2006 Apple Computer, Inc.  All rights reserved.
 * Copyright (C) 2006 Alexey Proskuryakov <ap@nypop.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef StreamingTextDecoderMac_H
#define StreamingTextDecoderMac_H

#include "StreamingTextDecoder.h"

namespace WebCore {

    class StreamingTextDecoderMac : public StreamingTextDecoder {
    public:
        StreamingTextDecoderMac(const TextEncoding&);
        virtual ~StreamingTextDecoderMac();

        bool textEncodingSupported();

        virtual DeprecatedString toUnicode(const char* chs, int len, bool flush = false);
        virtual DeprecatedCString fromUnicode(const DeprecatedString&, bool allowEntities = false);

    private:
        DeprecatedString convert(const char* chs, int len, bool flush)
            { return convert(reinterpret_cast<const unsigned char*>(chs), len, flush); }
        DeprecatedString convert(const unsigned char *chs, int len, bool flush);

        bool convertIfASCII(const unsigned char*, int len, DeprecatedString&);
        DeprecatedString convertUTF16(const unsigned char*, int len);
        DeprecatedString convertUsingTEC(const unsigned char*, int len, bool flush);
        OSStatus convertOneChunkUsingTEC(const unsigned char *inputBuffer, int inputBufferLength, int &inputLength, void *outputBuffer, int outputBufferLength, int &outputLength);

        OSStatus createTECConverter();
        void releaseTECConverter();

        static void appendOmittingBOM(DeprecatedString&, const UChar* characters, int byteCount);

        TextEncoding m_encoding;
        bool m_littleEndian;
        bool m_atStart;
        bool m_error;

        unsigned m_numBufferedBytes;
        unsigned char m_bufferedBytes[16]; // bigger than any single multi-byte character

        TECObjectRef m_converterTEC;
    };
    
} // namespace WebCore

#endif // StreamingTextDecoderMac_H
