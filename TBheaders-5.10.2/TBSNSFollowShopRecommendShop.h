//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, TBSNSFollowShopRecommendShopTO;
@protocol TBSNSFollowShopRecommendHotItem;

@interface TBSNSFollowShopRecommendShop : TBJSONModel
{
    _Bool _exposed;	// 8 = 0x8
    TBSNSFollowShopRecommendShopTO *_shopTO;	// 16 = 0x10
    NSArray<TBSNSFollowShopRecommendHotItem> *_hotItems;	// 24 = 0x18
    NSString *_scm;	// 32 = 0x20
    NSString *_pvid;	// 40 = 0x28
}

@property(nonatomic, getter=isExposed) _Bool exposed; // @synthesize exposed=_exposed;
@property(copy, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSArray<TBSNSFollowShopRecommendHotItem> *hotItems; // @synthesize hotItems=_hotItems;
@property(retain, nonatomic) TBSNSFollowShopRecommendShopTO *shopTO; // @synthesize shopTO=_shopTO;
- (void).cxx_destruct;

@end

