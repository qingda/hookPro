//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AliTradeSKUViewDelegate-Protocol.h"
#import "CellComponentControllerDelegate-Protocol.h"
#import "ListItemCellDelegate-Protocol.h"
#import "SearchCellController-Protocol.h"

@class AliDetailDataEngine, AliTradeSKUView, ItemExtensionListData, ItemListData, NSIndexPath, NSString, TMViewController, UICollectionView, UICollectionViewCell, UIImageView, UIView;
@protocol TMSearchResultsVMProtocol;

@interface ItemCellController : UIViewController <ListItemCellDelegate, CellComponentControllerDelegate, AliTradeSKUViewDelegate, SearchCellController>
{
    UIImageView *_flyImageView;	// 8 = 0x8
    _Bool _collectionOpened;	// 16 = 0x10
    _Bool _navigateBarShowed;	// 17 = 0x11
    _Bool _lock;	// 18 = 0x12
    UICollectionViewCell *_tempCell;	// 24 = 0x18
    ItemListData *_tempData;	// 32 = 0x20
    struct CGRect _tempFrame;	// 40 = 0x28
    UIView *_tempView;	// 72 = 0x48
    NSIndexPath *_tempIndexPath;	// 80 = 0x50
    NSString *_tempItemId;	// 88 = 0x58
    struct CGPoint _newCenter;	// 96 = 0x60
    TMViewController *contentController;	// 112 = 0x70
    id <TMSearchResultsVMProtocol> viewModel;	// 120 = 0x78
    UICollectionView *collectionView;	// 128 = 0x80
    AliDetailDataEngine *_detailService;	// 136 = 0x88
    UIView *_maskView;	// 144 = 0x90
    AliTradeSKUView *_tradeSkuView;	// 152 = 0x98
    ItemExtensionListData *_itemExListData;	// 160 = 0xa0
}

@property(nonatomic) __weak ItemExtensionListData *itemExListData; // @synthesize itemExListData=_itemExListData;
@property(retain, nonatomic) AliTradeSKUView *tradeSkuView; // @synthesize tradeSkuView=_tradeSkuView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) AliDetailDataEngine *detailService; // @synthesize detailService=_detailService;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak id <TMSearchResultsVMProtocol> viewModel; // @synthesize viewModel;
@property(nonatomic) __weak TMViewController *contentController; // @synthesize contentController;
- (void).cxx_destruct;
- (void)newCenterPointValue:(id)arg1;
- (void)cellNeedReflesh:(id)arg1;
- (void)longPressForFullLinkAtItemCell:(id)arg1 itemData:(id)arg2;
- (void)longPressForMoreSellerAtItemCell:(id)arg1 itemData:(id)arg2;
- (void)longPressGesture:(id)arg1 AtItemCell:(id)arg2;
- (void)findSimilar:(id)arg1;
- (void)clearTemp;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)doFallAnimationWithNewCenter:(struct CGPoint)arg1;
- (void)addItemExtension;
- (void)tradeSkuDidFinishChooseSku:(id)arg1 selectedSkuId:(id)arg2;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)showSKUViewWithItemId:(id)arg1;
- (void)marketShopingCartAddFailed:(id)arg1;
- (void)marketShopingCartAddSuccess;
- (void)marketItemsAddToCartWithCell:(id)arg1 buttonFrame:(struct CGRect)arg2 model:(id)arg3;
- (void)marketItemsClickedToDetailWithCell:(id)arg1 model:(id)arg2;
- (void)didSelectItemAtIndexPath:(id)arg1 data:(id)arg2 listStyle:(long long)arg3 convergeItem:(id)arg4;
- (void)didSelectItemAtIndexPath:(id)arg1 data:(id)arg2 listStyle:(long long)arg3;
- (void)didSelectItemAtIndexPath:(id)arg1 data:(id)arg2;
- (Class)supportDataType;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

