//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIImageView;

@interface COBubbleLabel : UILabel
{
    UIImageView *_backgroundImageView;
    struct UIEdgeInsets _textCapInsets;
    struct UIEdgeInsets _imageCapInsets;
}

@property(nonatomic) struct UIEdgeInsets imageCapInsets; // @synthesize imageCapInsets=_imageCapInsets;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) struct UIEdgeInsets textCapInsets; // @synthesize textCapInsets=_textCapInsets;
- (void).cxx_destruct;
- (void)setBubbleImage:(id)arg1 withCapInsets:(struct UIEdgeInsets)arg2;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

