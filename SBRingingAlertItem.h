//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class AVController, NSTimer;

@interface SBRingingAlertItem : SBAlertItem
{
    AVController *_avController;
    BOOL _isRinging;
    NSTimer *_autoMuteTimer;
}

- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)soundIdentifier;
- (id)avClientName;
- (id)avAudioCategory;
- (id)avClientPriority;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)dismissOnLock;
- (float)lockLabelFontSize;
- (void)willPresentAlertSheet:(id)arg1;
- (BOOL)isRinging;
- (void)startRingingAndVibrating;
- (void)_stopAutoMuteTimer;
- (void)_autoMute:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)willDeactivate:(BOOL)arg1;
- (void)stopRingingAndVibrating;
- (void)dealloc;

@end

