//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardView.h"

@class UILabel, UIView;

@interface TBSNSCardShopRmdSeparator : TBSNSCardView
{
    UIView *_line;	// 8 = 0x8
    UILabel *_info;	// 16 = 0x10
}

+ (struct CGSize)fixedSize;
@property(retain, nonatomic) UILabel *info; // @synthesize info=_info;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end
