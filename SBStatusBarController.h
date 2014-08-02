//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SBStatusBar, SBStatusBarContentsView, UIWindow;

@interface SBStatusBarController : NSObject
{
    UIWindow *_slidingStatusBarWindow;
    int _slidingStatusBarAnimation;
    UIWindow *_animatingCallStatusBarWindow;
    UIWindow *_leftBottomCorner;
    UIWindow *_rightBottomCorner;
    SBStatusBar *_statusBarView;
    SBStatusBarContentsView *_statusBarContentsView;
    SBStatusBar *_transitioningStatusBarView;
    SBStatusBar *_animatingCallStatusBar;
    SBStatusBarContentsView *_transitioningStatusBarContentsView;
    unsigned int _isLocked:1;
    unsigned int _lockIsChanging:1;
    unsigned int _dimmed:1;
    unsigned int _showDimmerOverlay:1;
    unsigned int _animating:1;
    unsigned int _isInCall:1;
    unsigned int _airplaneMode:1;
    unsigned int _showsProgress:1;
    unsigned int _cloakStatusBar:1;
    unsigned int _showAirport:1;
    unsigned int _animateDefaultStatusBarDown:1;
    unsigned int _animateDefaultStatusBarUp:1;
    NSMutableArray *_statusBarIndicatorNames;
    int _mode;
    int _orientation;
    int _animatingCallStatusBarOrientation;
    NSString *_customText;
    int _airPortSignalStrength;
    int _queuedStatusBarMode;
    int _queuedStatusBarOrientation;
    float _duration;
    BOOL _telephonyControllerCheckedIn;
    BOOL _bluetoothControllerCheckedIn;
}

+ (id)sharedStatusBarController;
+ (BOOL)isLikeAFullScreenStatusBar:(int)arg1;
+ (id)statusBarImageNamed:(id)arg1 forMode:(int)arg2;
- (id)init;
- (void)dealloc;
- (void)preheatStatusBarForMode:(int)arg1 orientation:(int)arg2;
- (id)statusBarWindow;
- (id)statusBarView;
- (id)transitioningStatusBarView;
- (void)addStatusBarItem:(id)arg1;
- (void)setIsLocked:(BOOL)arg1;
- (BOOL)isLocked;
- (BOOL)isLockChanging;
- (void)setDimmed:(BOOL)arg1;
- (BOOL)dimmed;
- (BOOL)showDimmerOverlay;
- (void)setShowDimmerOverlay:(BOOL)arg1;
- (void)tearDownWindowForSlidingStatusBar:(id)arg1 overStatusBar:(id)arg2;
- (void)setupWindowForSlidingStatusBar:(id)arg1 overStatusBar:(id)arg2;
- (void)endCallStatusBarAnimationFinished;
- (void)resizeStatusBar:(float)arg1 grow:(BOOL)arg2;
- (void)setIsInCall:(BOOL)arg1;
- (BOOL)isInCall;
- (void)animateDefaultStatusBarDown;
- (BOOL)isAnimatingStatusBarDown;
- (void)animateDefaultStatusBarUp:(int)arg1;
- (BOOL)isAnimatingStatusBarUp;
- (BOOL)_isServiceAvailable;
- (id)_SIMStatus;
- (void)_SIMOrServiceStatusChanged;
- (void)_SIMStatusChanged:(id)arg1;
- (void)_serviceStatusChanged:(id)arg1;
- (void)setAirplaneModeIsEnabled:(BOOL)arg1;
- (BOOL)airplaneModeIsEnabled;
- (void)removeStatusBarItem:(id)arg1;
- (id)statusBarIndicatorNames;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (void)setAirPortStrength:(int)arg1;
- (void)setShowsAirPort:(BOOL)arg1;
- (BOOL)showsAirPort;
- (int)airPortStrength;
- (void)setCloakStatusBar:(BOOL)arg1;
- (BOOL)cloakStatusBar;
- (void)updateProgressVisibility;
- (BOOL)showsProgress;
- (void)setStatusBarMode:(int)arg1 orientation:(int)arg2 duration:(float)arg3 fenceID:(int)arg4 animation:(int)arg5;
- (void)_setStatusBarSize:(BOOL)arg1;
- (void)_setTransitionalStatusBarSize:(BOOL)arg1;
- (void)finishSwitching;
- (void)statusBarDidFinishAnimatingDown;
- (void)restoreLevels;
- (void)statusBarDidFinishAnimatingUp;
- (void)switchBackstopFrom:(int)arg1 to:(int)arg2 fromOrientation:(int)arg3 toOrientation:(int)arg4 duration:(float)arg5 fenceID:(int)arg6 animation:(int)arg7;
- (void)orderStatusBarFront;
- (void)lockCurrentStatusBarForAnimation;
- (void)releaseLockedStatusBarForAnimationForDisplay:(id)arg1;
- (void)_finishStatusBarAnimation;
- (int)statusBarMode;
- (int)statusBarOrientation;
- (float)animationDuration;
- (void)significantTimeChange;
- (void)updateClockFormat;
- (void)signalFormatChanged;
- (void)checkInController:(int)arg1;
- (BOOL)telephonyControllerCheckedIn;
- (BOOL)bluetoothControllerCheckedIn;
- (void)loopCarrierNameIfNecessary;

@end
