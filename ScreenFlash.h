//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIWindow;

@interface ScreenFlash : NSObject
{
    UIWindow *_flashWindow;
    UIView *_flashView;
    BOOL _windowVisible;
}

+ (id)sharedScreenFlash;
- (void)_createUI;
- (void)_tearDown;
- (void)_orderWindowOut:(id)arg1;
- (void)_orderWindowFront:(id)arg1;
- (void)stopFlash;
- (void)flash;
- (void)animationDidStop:(id)arg1 finished:(id)arg2;

@end

