//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel;

@interface TBFavBarButton : UIButton
{
    long long _style;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 type:(long long)arg2;

@end

