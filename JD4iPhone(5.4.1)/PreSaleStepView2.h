//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDButton, NSString, PreSalePaymentInfoModel;

@interface PreSaleStepView2 : UIView
{
    JDButton *_checkBox;
    _Bool _isCheckBox;
    PreSalePaymentInfoModel *_preSaleModel;
    id <PreSaleStepViewDelegate2> _stepViewDelegate;
    NSString *_earnestDescription;
}

@property(retain, nonatomic) NSString *earnestDescription; // @synthesize earnestDescription=_earnestDescription;
@property(nonatomic) id <PreSaleStepViewDelegate2> stepViewDelegate; // @synthesize stepViewDelegate=_stepViewDelegate;
@property(nonatomic) _Bool isCheckBox; // @synthesize isCheckBox=_isCheckBox;
@property(retain, nonatomic) PreSalePaymentInfoModel *preSaleModel; // @synthesize preSaleModel=_preSaleModel;
- (void)jdIconClick:(id)arg1;
- (void)setIsChecked:(_Bool)arg1;
- (void)setPreSaleModel:(id)arg1 selected:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

