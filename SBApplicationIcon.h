//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class SBApplication, SBApplicationIconBadge, SBApplicationIconLabel, UIImage, UIImageView;

@interface SBApplicationIcon : UIControl
{
    UIImage *_icon;
    SBApplication *_app;
    UIImageView *_image;
    SBApplicationIconBadge *_badge;
    SBApplicationIconLabel *_label;
    BOOL _drawsLabel;
    BOOL _isHidden;
}

- (id)initWithApplication:(id)arg1;
- (void)dealloc;
- (id)application;
- (void)setIsHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (id)subviews;
- (void)setDisplayedIcon:(id)arg1;
- (id)icon;
- (id)hilightedIcon;
- (void)layout;
- (void)setDrawsLabel:(BOOL)arg1;
- (void)setBadge:(id)arg1;
- (id)displayName;
- (id)_automationID;
- (BOOL)shouldTrack;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)setHighlighted:(BOOL)arg1;

@end
