//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class JDQuickerCustomPageControl, UIButton, UIControl, UIImageView;

@interface JDQuickerBaseCardController : JDViewController
{
    UIControl *_cardView;
    UIButton *_Button;
    JDQuickerCustomPageControl *_customPageControl;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    UIImageView *_cardBgImageView;
}

- (void).cxx_destruct;
- (void)showAllImageView;
- (void)hiddenRightImageView;
- (void)hiddenLeftImageView;
- (void)addCommonConstraint;
- (void)buttonClick:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)viewDidLoad;
- (void)touchView;
- (void)loadView;

@end
