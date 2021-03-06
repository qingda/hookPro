//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMirrorBaseViewController.h"

#import "TBMirrorSkuViewDelegate-Protocol.h"

@class AliDetailDataEngine, AliDetailModel, NSString, TBMirrorDetailModel, TBMirrorNetWorkManager;

@interface TBMirror4DetailViewController : TBMirrorBaseViewController <TBMirrorSkuViewDelegate>
{
    AliDetailModel *_detailModel;	// 8 = 0x8
    TBMirrorDetailModel *_mirrorDetailModel;	// 16 = 0x10
    TBMirrorNetWorkManager *_netWorkManager;	// 24 = 0x18
    NSString *_itemId;	// 32 = 0x20
    AliDetailDataEngine *_detailDataEngine;	// 40 = 0x28
    NSString *_sellerUserId;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *sellerUserId; // @synthesize sellerUserId=_sellerUserId;
@property(retain, nonatomic) AliDetailDataEngine *detailDataEngine; // @synthesize detailDataEngine=_detailDataEngine;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) TBMirrorNetWorkManager *netWorkManager; // @synthesize netWorkManager=_netWorkManager;
@property(retain, nonatomic) TBMirrorDetailModel *mirrorDetailModel; // @synthesize mirrorDetailModel=_mirrorDetailModel;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clear;
- (void)makeUpDidFailedWithError:(id)arg1;
- (void)makeUpDidSuccess;
- (void)initMakeUpModuleDidFailedWithError:(id)arg1;
- (void)initMakeUpModuleDidSuccess;
- (void)makeUpWithMirrorSkuModel:(id)arg1;
- (void)buyBtnClickedWithMirrorSkuModel:(id)arg1;
- (void)setUpSkuViewWithItemModel:(id)arg1;
- (void)requestMakeUpDataWithItemId:(id)arg1 osVersion:(id)arg2;
- (void)makeUpWithDetailModel:(id)arg1;
- (id)dataForUserTrack;
- (void)didSupportMakeUp;
- (void)viewDidLoad;
- (void)getDetailModelWithItemId:(id)arg1;
- (id)initWithDetailModel:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

