//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderRefundBasicCell.h"

@class UILabel, UIView;

@interface TBOrderRefundPayCell : TBOrderRefundBasicCell
{
    UILabel *_tradeSumDesc;	// 8 = 0x8
    UILabel *_tradeSum;	// 16 = 0x10
    UILabel *_refundSumDesc;	// 24 = 0x18
    UILabel *_refundSum;	// 32 = 0x20
    UIView *_scaleView;	// 40 = 0x28
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) UIView *scaleView; // @synthesize scaleView=_scaleView;
@property(retain, nonatomic) UILabel *refundSum; // @synthesize refundSum=_refundSum;
@property(retain, nonatomic) UILabel *refundSumDesc; // @synthesize refundSumDesc=_refundSumDesc;
@property(retain, nonatomic) UILabel *tradeSum; // @synthesize tradeSum=_tradeSum;
@property(retain, nonatomic) UILabel *tradeSumDesc; // @synthesize tradeSumDesc=_tradeSumDesc;
- (void).cxx_destruct;
- (void)resetFrame:(id)arg1;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
