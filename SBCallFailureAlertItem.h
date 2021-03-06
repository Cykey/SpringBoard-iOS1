//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSString;

@interface SBCallFailureAlertItem : SBAlertItem
{
    int _causeCode;
    NSString *_address;
    struct __CTCall *_call;
}

- (id)initWithCauseCode:(long)arg1 call:(struct __CTCall *)arg2;
- (void)dealloc;
- (void)_dismiss;
- (void)_callback;
- (id)lockLabel;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)performUnlockAction;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;

@end

