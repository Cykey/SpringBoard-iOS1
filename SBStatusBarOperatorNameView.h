//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarContentView.h"

@class NSString;

@interface SBStatusBarOperatorNameView : SBStatusBarContentView
{
    float _letterSpacing;
    NSString *_operatorName;
    BOOL _fullSize;
}

- (id)initWithOperatorName:(id)arg1;
- (void)dealloc;
- (id)operatorNameStyle;
- (void)drawRect:(struct CGRect)arg1;
- (float)calculateLetterSpacingForOperatorName:(id)arg1;
- (id)operatorName;
- (void)setOperatorName:(id)arg1 fullSize:(BOOL)arg2;

@end
