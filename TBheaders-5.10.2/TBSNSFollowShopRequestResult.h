//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSFollowBaseRequestResult.h"

@class NSMutableArray, NSString;
@protocol TBSNSFollowShopModel;

@interface TBSNSFollowShopRequestResult : TBSNSFollowBaseRequestResult
{
    NSString *_catId;	// 8 = 0x8
    NSMutableArray<TBSNSFollowShopModel> *_list;	// 16 = 0x10
}

+ (id)createRequest;
@property(retain, nonatomic) NSMutableArray<TBSNSFollowShopModel> *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
- (void).cxx_destruct;
- (void)removeDataAtIndex:(long long)arg1;
- (void)configParamterWithRequest:(id)arg1;

@end

