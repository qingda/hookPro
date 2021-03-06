//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, TBTakeoutOrderDetailFeeViewModel, TBTakeoutPriceLabel, UILabel;

@interface TBTakeoutOrderDetailFeeCell : UITableViewCell
{
    TBTakeoutOrderDetailFeeViewModel *_viewModel;	// 8 = 0x8
    UILabel *_totalPriceTextLabel;	// 16 = 0x10
    UILabel *_totalPriceLabel;	// 24 = 0x18
    UILabel *_hongbaoTextLabel;	// 32 = 0x20
    UILabel *_hongbaoLabel;	// 40 = 0x28
    UILabel *_actualPaidFeeTextLabel;	// 48 = 0x30
    TBTakeoutPriceLabel *_actualPaidFeeLabel;	// 56 = 0x38
    NSMutableArray *_extraFeeContentLabels;	// 64 = 0x40
    NSMutableArray *_extraFeeLabels;	// 72 = 0x48
}

@property(retain, nonatomic) NSMutableArray *extraFeeLabels; // @synthesize extraFeeLabels=_extraFeeLabels;
@property(retain, nonatomic) NSMutableArray *extraFeeContentLabels; // @synthesize extraFeeContentLabels=_extraFeeContentLabels;
@property(retain, nonatomic) TBTakeoutPriceLabel *actualPaidFeeLabel; // @synthesize actualPaidFeeLabel=_actualPaidFeeLabel;
@property(retain, nonatomic) UILabel *actualPaidFeeTextLabel; // @synthesize actualPaidFeeTextLabel=_actualPaidFeeTextLabel;
@property(retain, nonatomic) UILabel *hongbaoLabel; // @synthesize hongbaoLabel=_hongbaoLabel;
@property(retain, nonatomic) UILabel *hongbaoTextLabel; // @synthesize hongbaoTextLabel=_hongbaoTextLabel;
@property(retain, nonatomic) UILabel *totalPriceLabel; // @synthesize totalPriceLabel=_totalPriceLabel;
@property(retain, nonatomic) UILabel *totalPriceTextLabel; // @synthesize totalPriceTextLabel=_totalPriceTextLabel;
@property(nonatomic) __weak TBTakeoutOrderDetailFeeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

