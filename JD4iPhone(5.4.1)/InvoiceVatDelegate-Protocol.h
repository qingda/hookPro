//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class InvoicePutTypeModel, UIButton, UITextField, UITextView;

@protocol InvoiceVatDelegate <NSObject>
- (void)vatInvoiceMakeWayWithModel:(InvoicePutTypeModel *)arg1;
- (void)vatTextViewBeginEdit:(UITextView *)arg1;
- (void)vatTextFieldBeginEdit:(UITextField *)arg1;
- (void)vatViewBtnTaped:(UIButton *)arg1;
- (void)upDateVatReceiveInfoTextViewHeight:(UITextView *)arg1;
@end

