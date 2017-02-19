//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, TBTradeQuantityModel, UIButton, UILabel, UITextField;
@protocol TBExtBuyViewInterceptProtocol;

@interface TBExtBuyQuantityCell : TBExtBuyBaseCell <UITextFieldDelegate>
{
    TBTradeQuantityModel *_model;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIButton *_increaseButton;	// 24 = 0x18
    UIButton *_decreaseButton;	// 32 = 0x20
    UITextField *_inputField;	// 40 = 0x28
    id <TBExtBuyViewInterceptProtocol> _viewInterceptor;	// 48 = 0x30
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) id <TBExtBuyViewInterceptProtocol> viewInterceptor; // @synthesize viewInterceptor=_viewInterceptor;
@property(retain, nonatomic) UITextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UIButton *decreaseButton; // @synthesize decreaseButton=_decreaseButton;
@property(retain, nonatomic) UIButton *increaseButton; // @synthesize increaseButton=_increaseButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak TBTradeQuantityModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)viewController;
- (void)checkButtonEnable;
- (void)decreaseButtonClicked;
- (void)increaseButtonClicked;
- (void)toolbarDoneItemClicked;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)bindData:(id)arg1;
- (void)initCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
