//
//  WAKAppKitStubs.h
//
//  Copyright (C) 2005, 2006, 2007, Apple Inc.  All rights reserved.
//
/* Unicodes we reserve for function keys on the keyboard,  OpenStep reserves the range 0xF700-0xF8FF for this purpose.  The availability of various keys will be system dependent. */
#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#import "WKTypes.h"

#ifndef NSView
#define NSClipView WAKClipView
#define NSView WAKView
#define NSScroller WAKScroller
#define NSScrollView WAKScrollView
#define WebDynamicScrollBarsView WAKScrollView
#define NSWindow WAKWindow
#define NSResponder WAKResponder

#define NSPoint CGPoint
#define NSSize CGSize
#define NSRect CGRect

#define NSZeroPoint CGPointZero
#define NSZeroSize CGSizeZero
#define NSZeroRect CGRectZero

#define NSMakePoint CGPointMake
#define NSMakeSize CGSizeMake
#define NSMakeRect CGRectMake

#define NSEqualPoints CGPointEqualToPoint
#define NSEqualSizes CGSizeEqualToSize
#define NSEqualRects CGRectEqualToRect

#define NSPointInRect(x,y) CGRectContainsPoint(y,x)
#define NSInsetRect CGRectInset
#define NSIntersectionRect CGRectIntersection
#define NSIsEmptyRect CGRectIsEmpty
#define NSMaxX CGRectGetMaxX
#define NSMaxY CGRectGetMaxY
#define NSContainsRect CGRectContainsRect
#define NSWidth CGRectGetWidth
#define NSHeight CGRectGetHeight

#endif

enum {
	NSUpArrowFunctionKey		= 0xF700,
	NSDownArrowFunctionKey		= 0xF701,
	NSLeftArrowFunctionKey		= 0xF702,
	NSRightArrowFunctionKey		= 0xF703,
	NSF1FunctionKey			= 0xF704,
	NSF2FunctionKey			= 0xF705,
	NSF3FunctionKey			= 0xF706,
	NSF4FunctionKey			= 0xF707,
	NSF5FunctionKey			= 0xF708,
	NSF6FunctionKey			= 0xF709,
	NSF7FunctionKey			= 0xF70A,
	NSF8FunctionKey			= 0xF70B,
	NSF9FunctionKey			= 0xF70C,
	NSF10FunctionKey		= 0xF70D,
	NSF11FunctionKey		= 0xF70E,
	NSF12FunctionKey		= 0xF70F,
	NSF13FunctionKey		= 0xF710,
	NSF14FunctionKey		= 0xF711,
	NSF15FunctionKey		= 0xF712,
	NSF16FunctionKey		= 0xF713,
	NSF17FunctionKey		= 0xF714,
	NSF18FunctionKey		= 0xF715,
	NSF19FunctionKey		= 0xF716,
	NSF20FunctionKey		= 0xF717,
	NSF21FunctionKey		= 0xF718,
	NSF22FunctionKey		= 0xF719,
	NSF23FunctionKey		= 0xF71A,
	NSF24FunctionKey		= 0xF71B,
	NSF25FunctionKey		= 0xF71C,
	NSF26FunctionKey		= 0xF71D,
	NSF27FunctionKey		= 0xF71E,
	NSF28FunctionKey		= 0xF71F,
	NSF29FunctionKey		= 0xF720,
	NSF30FunctionKey		= 0xF721,
	NSF31FunctionKey		= 0xF722,
	NSF32FunctionKey		= 0xF723,
	NSF33FunctionKey		= 0xF724,
	NSF34FunctionKey		= 0xF725,
	NSF35FunctionKey		= 0xF726,
	NSInsertFunctionKey		= 0xF727,
	NSDeleteFunctionKey		= 0xF728,
	NSHomeFunctionKey		= 0xF729,
	NSBeginFunctionKey		= 0xF72A,
	NSEndFunctionKey		= 0xF72B,
	NSPageUpFunctionKey		= 0xF72C,
	NSPageDownFunctionKey		= 0xF72D,
	NSPrintScreenFunctionKey	= 0xF72E,
	NSScrollLockFunctionKey		= 0xF72F,
	NSPauseFunctionKey		= 0xF730,
	NSSysReqFunctionKey		= 0xF731,
	NSBreakFunctionKey		= 0xF732,
	NSResetFunctionKey		= 0xF733,
	NSStopFunctionKey		= 0xF734,
	NSMenuFunctionKey		= 0xF735,
	NSUserFunctionKey		= 0xF736,
	NSSystemFunctionKey		= 0xF737,
	NSPrintFunctionKey		= 0xF738,
	NSClearLineFunctionKey		= 0xF739,
	NSClearDisplayFunctionKey	= 0xF73A,
	NSInsertLineFunctionKey		= 0xF73B,
	NSDeleteLineFunctionKey		= 0xF73C,
	NSInsertCharFunctionKey		= 0xF73D,
	NSDeleteCharFunctionKey		= 0xF73E,
	NSPrevFunctionKey		= 0xF73F,
	NSNextFunctionKey		= 0xF740,
	NSSelectFunctionKey		= 0xF741,
	NSExecuteFunctionKey		= 0xF742,
	NSUndoFunctionKey		= 0xF743,
	NSRedoFunctionKey		= 0xF744,
	NSFindFunctionKey		= 0xF745,
	NSHelpFunctionKey		= 0xF746,
	NSModeSwitchFunctionKey		= 0xF747
};

enum {
    NSParagraphSeparatorCharacter = 0x2029,
    NSLineSeparatorCharacter = 0x2028,
    NSTabCharacter = 0x0009,
    NSFormFeedCharacter = 0x000c,
    NSNewlineCharacter = 0x000a,
    NSCarriageReturnCharacter = 0x000d,
    NSEnterCharacter = 0x0003,
    NSBackspaceCharacter = 0x0008,
    NSBackTabCharacter = 0x0019,
    NSDeleteCharacter = 0x007f
};

/* Device-independent bits found in event modifier flags */
enum {
	NSAlphaShiftKeyMask =		1 << 16,
	NSShiftKeyMask =		1 << 17,
	NSControlKeyMask =		1 << 18,
	NSAlternateKeyMask =		1 << 19,
	NSCommandKeyMask =		1 << 20,
	NSNumericPadKeyMask =		1 << 21,
	NSHelpKeyMask =			1 << 22,
	NSFunctionKeyMask =		1 << 23,
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4
	NSDeviceIndependentModifierFlagsMask = 0xffff0000U
#endif
};

typedef enum _NSWritingDirection {
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4
    NSWritingDirectionNatural = -1, /* Determines direction using the Unicode Bidi Algorithm rules P2 and P3 */
#endif /* MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4 */
    NSWritingDirectionLeftToRight = 0,	/* Left to right writing direction */
    NSWritingDirectionRightToLeft	/* Right to left writing direction */
} NSWritingDirection;

typedef enum _NSSelectionAffinity {
    NSSelectionAffinityUpstream = 0,
    NSSelectionAffinityDownstream = 1
} NSSelectionAffinity;

typedef enum _NSCellState {
    NSMixedState = -1,
    NSOffState   =  0,
    NSOnState    =  1    
} NSCellStateValue;

typedef enum _NSCompositingOperation {
    NSCompositeClear		= 0,
    NSCompositeCopy		= 1,
    NSCompositeSourceOver	= 2,
    NSCompositeSourceIn		= 3,
    NSCompositeSourceOut	= 4,
    NSCompositeSourceAtop	= 5,
    NSCompositeDestinationOver	= 6,
    NSCompositeDestinationIn	= 7,
    NSCompositeDestinationOut	= 8,
    NSCompositeDestinationAtop	= 9,
    NSCompositeXOR		= 10,
    NSCompositePlusDarker	= 11,
    NSCompositeHighlight	= 12,
    NSCompositePlusLighter	= 13
} NSCompositingOperation;

typedef enum _NSMultibyteGlyphPacking {
    NSOneByteGlyphPacking,
    NSJapaneseEUCGlyphPacking,
    NSAsciiWithDoubleByteEUCGlyphPacking,
    NSTwoByteGlyphPacking,
    NSFourByteGlyphPacking,
    NSNativeShortGlyphPacking
} NSMultibyteGlyphPacking;

typedef enum _NSSelectionDirection {
    NSDirectSelection = 0,
    NSSelectingNext,
    NSSelectingPrevious
} NSSelectionDirection;

void *WKAutorelease(id object);

@interface NSCursor : NSObject
+ (void)setHiddenUntilMouseMoves:(BOOL)flag;
@end

@interface NSValue (CGRidiculousness)
+ (id)valueWithSize:(CGSize)aSize;
- (CGSize)sizeValue;
+ (id)valueWithRect:(CGRect)aRect;
- (CGRect)rectValue;
@end

#ifdef __cplusplus
extern "C" {
#endif

BOOL WKMouseInRect(CGPoint aPoint, CGRect aRect);
void WKBeep(void);

#ifdef __cplusplus
}
#endif
