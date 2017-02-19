//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBaseContainerView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class AliDetailAreaChooseHeaderView, AliDetailAreaItemPage, AliDetailAreaTitleView, AliDetailModel, AliDetailServiceContext, AliTradeDetailAreaListService, NSMutableArray, NSString, UIActivityIndicatorView, UIScrollView, UIView;

@interface AliDetailNewAreaChooseView : AliDetailBaseContainerView <UIScrollViewDelegate>
{
    _Bool _isFrontCommonAddress;	// 8 = 0x8
    _Bool _hasCommonAddress;	// 9 = 0x9
    _Bool _refreshed;	// 10 = 0xa
    UIScrollView *_pagesView;	// 16 = 0x10
    UIScrollView *_containerViewFull;	// 24 = 0x18
    UIView *_containerCommonView;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    UIActivityIndicatorView *_loadingIndicator;	// 48 = 0x30
    AliDetailAreaChooseHeaderView *_headerView;	// 56 = 0x38
    AliDetailAreaTitleView *_titleView;	// 64 = 0x40
    AliDetailAreaItemPage *_commonAddressView;	// 72 = 0x48
    AliTradeDetailAreaListService *_areaService;	// 80 = 0x50
    AliDetailServiceContext *_areaContext;	// 88 = 0x58
    NSMutableArray *_itemPages;	// 96 = 0x60
    NSMutableArray *_headerSource;	// 104 = 0x68
    AliDetailModel *_detailModel;	// 112 = 0x70
    NSString *_itemId;	// 120 = 0x78
    NSString *_eventToken;	// 128 = 0x80
    long long _currentPage;	// 136 = 0x88
}

@property(nonatomic) _Bool refreshed; // @synthesize refreshed=_refreshed;
@property(nonatomic) _Bool hasCommonAddress; // @synthesize hasCommonAddress=_hasCommonAddress;
@property(nonatomic) _Bool isFrontCommonAddress; // @synthesize isFrontCommonAddress=_isFrontCommonAddress;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) __weak AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) NSMutableArray *headerSource; // @synthesize headerSource=_headerSource;
@property(retain, nonatomic) NSMutableArray *itemPages; // @synthesize itemPages=_itemPages;
@property(retain, nonatomic) AliDetailServiceContext *areaContext; // @synthesize areaContext=_areaContext;
@property(retain, nonatomic) AliTradeDetailAreaListService *areaService; // @synthesize areaService=_areaService;
@property(retain, nonatomic) AliDetailAreaItemPage *commonAddressView; // @synthesize commonAddressView=_commonAddressView;
@property(retain, nonatomic) AliDetailAreaTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) AliDetailAreaChooseHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *containerCommonView; // @synthesize containerCommonView=_containerCommonView;
@property(retain, nonatomic) UIScrollView *containerViewFull; // @synthesize containerViewFull=_containerViewFull;
@property(retain, nonatomic) UIScrollView *pagesView; // @synthesize pagesView=_pagesView;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)changeViewOffset:(_Bool)arg1;
- (void)relayoutPagesView;
- (void)finishChooseArea:(id)arg1;
- (void)removeAreaItemPage:(id)arg1;
- (void)addAreaItemPage:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)clearViews;
- (void)clearSelectedArea;
- (void)hideAreaChooserView;
- (void)executeViewDidDisappearBlock;
- (CDUnknownBlockType)viewDidDisappearBlock;
- (void)showAreaChooserView:(id)arg1 vc:(id)arg2 defaultShow:(_Bool)arg3;
- (void)refreshAreaChooserView:(id)arg1 vc:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
