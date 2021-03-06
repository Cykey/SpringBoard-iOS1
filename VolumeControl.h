//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIWindow, VolumeControlView;

@interface VolumeControl : NSObject
{
    UIWindow *_volumeWindow;
    VolumeControlView *_volumeView;
    BOOL _windowVisible;
    BOOL _debounce;
    int _mode;
    double _lastButtonEventTime;
    NSString *_lastDisplayedCategory;
    NSString *_lastEventCategory;
}

+ (id)sharedVolumeControl;
- (id)init;
- (void)dealloc;
- (void)reorientHUDIfNeeded:(BOOL)arg1;
- (void)_createUI;
- (void)_tearDown;
- (void)_orderWindowOut:(id)arg1;
- (BOOL)_HUDIsDisplayableForCategory:(id)arg1;
- (float)_windowFadeDelay;
- (void)_orderWindowFront:(id)arg1 forCategory:(id)arg2;
- (BOOL)_allowVolumeChangeForCategory:(id)arg1;
- (void)_changeVolumeBy:(float)arg1;
- (float)_calcButtonRepeatDelay;
- (void)increaseVolume;
- (void)decreaseVolume;
- (void)hideHUD;
- (void)showHUD;
- (id)lastDisplayedCategory;
- (void)setHUDMode:(int)arg1;
- (void)handleVolumeEvent:(struct __GSEvent *)arg1;
- (void)cancelVolumeEvent;
- (void)animationDidStop:(id)arg1 finished:(id)arg2;
- (void)_registerForAVSystemControllerNotifications;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_serverConnectionDied:(id)arg1;
- (int)_volumeModeForCategory:(id)arg1;
- (void)_systemVolumeChanged:(id)arg1;

@end

