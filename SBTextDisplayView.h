//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface SBTextDisplayView : UIView
{
    NSString *_text;
    NSString *_style;
}

- (id)initWithWidth:(float)arg1 text:(id)arg2 style:(id)arg3;
- (void)dealloc;
- (void)_updateText;
- (void)setStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

