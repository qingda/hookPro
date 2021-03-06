//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailDataEngineProtocol-Protocol.h"

@class AliDetailModel, AliDetailServiceContext, NSDictionary, NSString;

@protocol TBTradeDetailServiceProtocol <AliDetailDataEngineProtocol>
- (void)loadDetail:(NSString *)arg1 queryParams:(NSDictionary *)arg2 context:(AliDetailServiceContext *)arg3;
- (AliDetailModel *)detailModel;
- (void)queryItemWithItemId:(NSString *)arg1 completeBlock:(void (^)(NSDictionary *, NSError *))arg2;
@end

