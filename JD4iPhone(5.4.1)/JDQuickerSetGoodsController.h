//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDQuickerBaseCardController.h"

#import "JDBaseToastViewDelegate.h"
#import "JDQuickerToastViewDelegate.h"
#import "UIWebViewDelegate.h"

@class JDStoreNetwork, NSString, NSURL, UIButton, UIView<JDWebViewProgressViewProtocol>, UIWebView, WebViewJavascriptBridge;

@interface JDQuickerSetGoodsController : JDQuickerBaseCardController <UIWebViewDelegate, JDQuickerToastViewDelegate, JDBaseToastViewDelegate>
{
    UIWebView *_webView;
    WebViewJavascriptBridge *_javaScriptBridge;
    UIButton *_rightButton;
    JDStoreNetwork *_network;
    NSString *_sn;
    _Bool _isSuccessPage;
    unsigned long long _loadingCount;
    unsigned long long _maxLoadCount;
    float _progress;
    UIView<JDWebViewProgressViewProtocol> *_progressView;
    NSURL *_currentURL;
    _Bool _interactive;
    CDUnknownBlockType _responseCallback;
}

- (void).cxx_destruct;
- (void)didGiveUpInQuickerToastView:(id)arg1;
- (void)didGoOnInQuickerToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)progress:(_Bool)arg1 withRequest:(id)arg2;
- (void)reset;
- (void)setProgress:(float)arg1;
- (void)completeProgress;
- (void)incrementProgress;
- (void)startProgress;
- (_Bool)checkIfRPCURL:(id)arg1;
- (void)dealloc;
- (void)backButtonClicked;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)getTheFullURL:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)goBackToHome;
- (void)popAToast;
- (void)rightBarButtonItemClick:(id)arg1;
- (id)getTheJDQuickerViewController;
- (void)requestWebView:(id)arg1;
- (void)hiddenOrDisplayLeftBarButton;
- (void)initWebView;
- (void)jsConfirmCartOnly:(id)arg1;
- (void)jsToast:(id)arg1;
- (void)jsGoBack;
- (void)jsGoSku:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSN:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

