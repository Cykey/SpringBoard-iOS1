//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPPhonePad.h"

@class SBEmergencyCallButton, UIImage, UIPushButton;

@interface SBDeviceLockKeypad : TPPhonePad
{
    UIImage *_deleteIcon;
    UIPushButton *_deleteButton;
    SBEmergencyCallButton *_emergencyCallButton;
    BOOL _showDeleteIcon;
    BOOL _playKeyboardClicks;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPlaysKeyboardClicks:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)dealloc;
- (void)setShowsDeleteIcon:(BOOL)arg1;
- (id)_pressedImage;
- (void)hiddenFromView;
- (void)willBecomeVisible;
- (id)_keypadImage;
- (float)_yFudge;

@end

