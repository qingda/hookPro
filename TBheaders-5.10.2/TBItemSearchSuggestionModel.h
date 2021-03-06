//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchRequestModel.h"

#import "TBXSearchRequestServiceDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, TBXSearchRequestService;

@interface TBItemSearchSuggestionModel : TBSearchRequestModel <TBXSearchRequestServiceDelegate>
{
    _Bool _isLoading;	// 8 = 0x8
    NSMutableArray *_suggestionList;	// 16 = 0x10
    NSMutableArray *_hotKeys;	// 24 = 0x18
    NSDate *_beginTime;	// 32 = 0x20
    TBXSearchRequestService *_request;	// 40 = 0x28
}

@property(retain, nonatomic) TBXSearchRequestService *request; // @synthesize request=_request;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSMutableArray *hotKeys; // @synthesize hotKeys=_hotKeys;
@property(retain, nonatomic) NSMutableArray *suggestionList; // @synthesize suggestionList=_suggestionList;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)commitAppMonitorLog;
- (void)registryAppMonitor;
- (void)requestServiceFailed:(id)arg1 Error:(id)arg2;
- (void)requestServiceSuccess:(id)arg1;
- (void)requestServiceStart:(id)arg1;
- (void)cleanDelegateAndCancel;
- (void)finishWithData:(id)arg1 requestContainer:(id)arg2;
- (void)doRequest:(id)arg1;
- (void)getSuggestionsByKeyword:(id)arg1 andShopId:(id)arg2;
- (void)getSuggestionsByKeyword:(id)arg1 tab:(id)arg2;
- (void)getHotKeysBySellerId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

