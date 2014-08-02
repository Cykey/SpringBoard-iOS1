//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBSyncController : NSObject
{
    int _syncState;
    int _restoreState;
    int _resetState;
    int _sofwareUpdateState;
    struct __CFMachPort *_backupAgentCFPort;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)startObserving;
- (void)stopObserving;
- (BOOL)isSyncing;
- (int)syncState;
- (void)didEndSyncing;
- (void)suspendSyncing;
- (void)resumeSyncing;
- (void)cancelSyncing;
- (void)_notifyAppsSyncWillBegin;
- (void)didShowSyncPanel;
- (void)frontLockedWhenPossible;
- (void)beginSyncing;
- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(int)arg1;
- (BOOL)isRestoring;
- (int)restoreState;
- (void)_notifyRestoreCanProceed;
- (void)beginRestoring;
- (void)finishedTerminatingApplications;
- (void)cancelRestoring;
- (void)_rebootNow;
- (void)finishEndRestoring;
- (void)didEndRestoring:(int)arg1;
- (BOOL)isResetting;
- (int)resetState;
- (void)_delayedTurnOffRadio;
- (void)beginResetting;
- (void)didEndResetting;
- (void)_invalidateBackupAgentCFPort;
- (BOOL)_setupBackupAgentPort;
- (void)setSoftwareUpdateState:(int)arg1;
- (void)showPreSoftwareUpdateScreen;
- (BOOL)isSoftwareUpdating;

@end
