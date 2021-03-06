//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBPaymentPayBaseViewController.h"

#import "UIScrollViewDelegate.h"

@class CBPInputBox, CBPUserNameInputBox, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView;

@interface CBPaymentPayAddViewController : CBPaymentPayBaseViewController <UIScrollViewDelegate>
{
    double _offsetY;
    _Bool _certNameHasChanged;
    CDUnknownBlockType _returnBlock;
    UIImageView *_processImageView;
    CBPInputBox *_cardNumberInputBox;
    CBPUserNameInputBox *_certNameInputBox;
    UIButton *_supportButton;
    UIButton *_nextButton;
    UIScrollView *_mainScrollView;
    NSMutableArray *_inputArray;
}

@property(retain, nonatomic) NSMutableArray *inputArray; // @synthesize inputArray=_inputArray;
@property(nonatomic) _Bool certNameHasChanged; // @synthesize certNameHasChanged=_certNameHasChanged;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *supportButton; // @synthesize supportButton=_supportButton;
@property(retain, nonatomic) CBPUserNameInputBox *certNameInputBox; // @synthesize certNameInputBox=_certNameInputBox;
@property(retain, nonatomic) CBPInputBox *cardNumberInputBox; // @synthesize cardNumberInputBox=_cardNumberInputBox;
@property(retain, nonatomic) UIImageView *processImageView; // @synthesize processImageView=_processImageView;
@property(copy, nonatomic) CDUnknownBlockType returnBlock; // @synthesize returnBlock=_returnBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)private_keyboardWillShow:(id)arg1;
- (void)private_keyboardWillHide:(id)arg1;
- (void)clearAndInputAgain;
- (void)cb_inputAgain;
- (void)private_verifyCardBin;
- (void)private_preVerifyCardBin;
- (void)cb_nextButtonAction:(id)arg1;
- (void)private_scrollViewSettings;
- (void)cb_createNextButton;
- (void)cb_supportButtonAction:(id)arg1;
- (void)cb_createSupportButton;
- (void)cb_createCardNumberInputBox;
- (void)private_textFieldEditingChangedAction:(id)arg1;
- (void)private_createCardNameInputBox;
- (void)cb_createProcessImageView;
- (void)private_createScrollView;
- (void)private_setupSelf;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithReturnBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)navBarLeftButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

