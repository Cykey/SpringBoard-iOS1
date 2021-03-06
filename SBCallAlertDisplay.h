//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSlidingAlertDisplay.h"

@interface SBCallAlertDisplay : SBSlidingAlertDisplay
{
    BOOL _wasToldToStopRinging;
    BOOL _answered;
}

+ (id)createBottomLockBarForDisplay:(id)arg1;
+ (id)createBottomBarForInstance:(id)arg1;
- (void)ringOrVibrate;
- (void)stopRingingOrVibrating;
- (BOOL)wasToldToStopRinging;
- (void)ringerChanged;
- (void)updateLCDWithName:(id)arg1 label:(id)arg2 breakPoint:(unsigned int)arg3;
- (void)updateImageFromPerson:(struct CPRecord *)arg1;
- (void)setAlert:(id)arg1;
- (void)checkForStatusChange;
- (void)_ringIfNecessary;
- (void)alertDisplayWillBecomeVisible;
- (void)alertDisplayBecameVisible;
- (void)finishedAnimatingIn;
- (id)additionalURLParameter;
- (void)answerCall:(struct __CTCall *)arg1;
- (void)answerAndRelease;
- (void)answer:(id)arg1;
- (void)lockBarUnlocked:(id)arg1;
- (void)dismiss;
- (void)ignoreAndRelease;
- (void)ignore;
- (void)handleVolumeEvent:(struct __GSEvent *)arg1;

@end

