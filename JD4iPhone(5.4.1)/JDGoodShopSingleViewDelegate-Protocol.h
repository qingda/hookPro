//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDGoodShopResultModel, NSNumber;

@protocol JDGoodShopSingleViewDelegate <NSObject>
- (void)clickActivityImageInGoodShop:(JDGoodShopResultModel *)arg1;
- (void)toLogin;
- (void)followOrShieldShopAfterUnLogin;
- (void)followOrShieldShopWhenUnLogin;
- (void)dealWithShopCard:(JDGoodShopResultModel *)arg1 withTag:(long long)arg2 withIndex:(long long)arg3;
- (void)scrollSlideProduct:(NSNumber *)arg1;
- (void)singleViewMoveNext;
- (void)turnProductVC:(JDGoodShopResultModel *)arg1 index:(NSNumber *)arg2;
- (void)reloadSingleRequest;
@end
