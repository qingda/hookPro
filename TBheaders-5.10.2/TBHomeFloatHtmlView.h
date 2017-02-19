//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBPopLayerControllerProtocol-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, TBPopLayerController, UIButton, UIViewController;
@protocol TBHomeFloatHtmlViewDelegata, TBWebViewServiceProtocol;

@interface TBHomeFloatHtmlView : UIView <UIWebViewDelegate, TBPopLayerControllerProtocol>
{
    id <TBHomeFloatHtmlViewDelegata> _delegate;	// 8 = 0x8
    UIButton *_closeButton;	// 16 = 0x10
    UIViewController<TBWebViewServiceProtocol> *_webVC;	// 24 = 0x18
    TBPopLayerController *_popLayer;	// 32 = 0x20
    NSURL *_h5Url;	// 40 = 0x28
}

@property(copy, nonatomic) NSURL *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) TBPopLayerController *popLayer; // @synthesize popLayer=_popLayer;
@property(retain, nonatomic) UIViewController<TBWebViewServiceProtocol> *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <TBHomeFloatHtmlViewDelegata> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)screenShotImg;
- (void)sendClosedNotification;
- (void)dismissFloatViewWithCompelete:(CDUnknownBlockType)arg1 withType:(id)arg2;
- (void)zoomoutFloatViewWithCompelete:(CDUnknownBlockType)arg1;
- (void)fadeoutFloatViewWithCompelete:(CDUnknownBlockType)arg1;
- (void)loadH5WithWindVane:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)statusChanged:(id)arg1;
- (void)closedPopCtrl:(id)arg1;
- (void)loadH5WithPopLayer:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)loadH5Animate:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dismissFloatView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
