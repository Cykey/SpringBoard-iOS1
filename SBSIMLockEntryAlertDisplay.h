//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSlidingAlertDisplay.h"

@interface SBSIMLockEntryAlertDisplay : SBSlidingAlertDisplay
{
}

- (id)_pinAttemptsRemainingLabel;
- (void)setupUnlockAttemptState;
- (id)failureTitle;
- (id)failureLabel;
- (void)setupFailureState;
- (id)titleText;
- (id)label;
- (void)setupCurrentLockAttemptState;
- (void)alertDisplayWillBecomeVisible;
- (void)setupSuccess;
- (void)_unlock:(id)arg1;
- (void)unlock;
- (void)phonePad:(id)arg1 keyUp:(BOOL)arg2;
- (void)passcodeFieldDidAcceptEntry:(id)arg1;

@end

