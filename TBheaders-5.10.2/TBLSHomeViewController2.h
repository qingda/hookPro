//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBLSLocationViewModelDelegate2-Protocol.h"
#import "WindVaneUIWbeViewDelegate-Protocol.h"

@class NSString, TBLSLocationViewModel2, TBLSPOIEntity, TBLSTitleView2, TBLocationData, TBPoiInfoView2, WVWebView;

@interface TBLSHomeViewController2 : UIViewController <TBLSLocationViewModelDelegate2, WindVaneUIWbeViewDelegate>
{
    TBLSPOIEntity *_poiEntity;	// 8 = 0x8
    TBLSTitleView2 *_titleView;	// 16 = 0x10
    TBPoiInfoView2 *_poiInfoView;	// 24 = 0x18
    WVWebView *_webView;	// 32 = 0x20
    TBLocationData *_currentLocationData;	// 40 = 0x28
    TBLSLocationViewModel2 *_locationViewModel;	// 48 = 0x30
}

@property(retain, nonatomic) TBLSLocationViewModel2 *locationViewModel; // @synthesize locationViewModel=_locationViewModel;
@property(retain, nonatomic) TBLocationData *currentLocationData; // @synthesize currentLocationData=_currentLocationData;
@property(retain, nonatomic) WVWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) TBPoiInfoView2 *poiInfoView; // @synthesize poiInfoView=_poiInfoView;
@property(retain, nonatomic) TBLSTitleView2 *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TBLSPOIEntity *poiEntity; // @synthesize poiEntity=_poiEntity;
- (void).cxx_destruct;
- (void)selectLocationViewWillAppear;
- (void)didFinishedByCurrentLocationData:(id)arg1;
- (void)selectedLocationFinished:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)enterForeground:(id)arg1;
- (void)location;
- (void)getAddressInfoByCurrentLocationData:(id)arg1;
- (void)refreshHomePage:(id)arg1;
- (void)searchStore;
- (void)selectAddress;
- (void)searchBtnClicked;
- (void)pop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

