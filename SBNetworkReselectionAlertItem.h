//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBPhoneAlertItem.h"

@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem
{
}

+ (id)currentInstance;
+ (BOOL)hasCurrentInstance;
- (id)init;
- (void)_showPrefs;
- (id)lockLabel;
- (void)performUnlockAction;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)willDeactivate:(BOOL)arg1;

@end
