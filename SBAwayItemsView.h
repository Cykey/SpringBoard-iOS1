//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertSheet.h"

@class NSArray;

@interface SBAwayItemsView : UIAlertSheet
{
    NSArray *_displayedItems;
    float _widestLabel;
}

+ (struct __GSFont *)createItemTypeFont;
- (id)init;
- (void)dealloc;
- (BOOL)reloadData;
- (BOOL)hasAwayItems;
- (void)drawItems;
- (void)drawRect:(struct CGRect)arg1;

@end

