//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSlidingAlertDisplay.h"

@class NSArray, UITable;

@interface SBSIMToolkitListDisplay : SBSlidingAlertDisplay
{
    UITable *_table;
    NSArray *_items;
}

+ (id)createTopBarForInstance:(id)arg1;
- (void)dealloc;
- (id)_simToolkitListItems;
- (void)_selectListItem:(unsigned long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)showsDesktopImage;
- (void)setMiddleContentAlpha:(float)arg1;
- (void)alertDisplayWillBecomeVisible;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (int)numberOfRowsInTable:(id)arg1;
- (id)table:(id)arg1 cellForRow:(int)arg2 column:(id)arg3;
- (void)tableSelectionDidChange:(id)arg1;

@end

