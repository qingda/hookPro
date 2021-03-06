//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TBPSImagePickerErrorView : UIView
{
    UILabel *_topLabel;	// 8 = 0x8
    UILabel *_firstLabel;	// 16 = 0x10
    UILabel *_secondLabel;	// 24 = 0x18
    UILabel *_thirdLabel;	// 32 = 0x20
    UILabel *_fourthLabel;	// 40 = 0x28
    UIImageView *_settingImageView;	// 48 = 0x30
    UIImageView *_privacyImageView;	// 56 = 0x38
    UIImageView *_libraryImageView;	// 64 = 0x40
    UIImageView *_taoImageView;	// 72 = 0x48
    UIView *_contentView;	// 80 = 0x50
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *taoImageView; // @synthesize taoImageView=_taoImageView;
@property(retain, nonatomic) UIImageView *libraryImageView; // @synthesize libraryImageView=_libraryImageView;
@property(retain, nonatomic) UIImageView *privacyImageView; // @synthesize privacyImageView=_privacyImageView;
@property(retain, nonatomic) UIImageView *settingImageView; // @synthesize settingImageView=_settingImageView;
@property(retain, nonatomic) UILabel *fourthLabel; // @synthesize fourthLabel=_fourthLabel;
@property(retain, nonatomic) UILabel *thirdLabel; // @synthesize thirdLabel=_thirdLabel;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

