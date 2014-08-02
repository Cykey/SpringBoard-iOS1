//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationIcon.h"

@class UIImage, UIImageView;

@interface SBPhoneApplicationIcon : SBApplicationIcon
{
    UIImageView *_blinkIcon;
    UIImage *_blinkOnIcon;
    unsigned int _isBlinking:1;
}

- (id)initWithApplication:(id)arg1;
- (void)dealloc;
- (id)icon;
- (void)_startTimer;
- (void)_stopTimer;
- (void)iconBecameVisible;
- (void)iconWillBeHidden;
- (void)alertWindowHidden;
- (void)startBlinking;
- (void)stopBlinking;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)_activeCallStateChanged:(id)arg1;

@end
