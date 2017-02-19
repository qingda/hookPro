//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKServerDelegate-Protocol.h"

@class JUSDKDOBase, NSDictionary, NSString, TBSDKMTOPServer;

@interface JUSDKTBMTOPRequest : NSObject <TBSDKServerDelegate>
{
    _Bool _isLoading;	// 8 = 0x8
    _Bool _needEcode;	// 9 = 0x9
    TBSDKMTOPServer *_mtopRequest;	// 16 = 0x10
    NSString *_apiMethod;	// 24 = 0x18
    NSString *_v;	// 32 = 0x20
    id _delegate;	// 40 = 0x28
    SEL _requestDidFailedSelector;	// 48 = 0x30
    SEL _requestDidFinishSelector;	// 56 = 0x38
    JUSDKDOBase *_responseObj;	// 64 = 0x40
    NSString *_ecode;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *ecode; // @synthesize ecode=_ecode;
@property(retain, nonatomic) JUSDKDOBase *responseObj; // @synthesize responseObj=_responseObj;
@property(nonatomic) SEL requestDidFinishSelector; // @synthesize requestDidFinishSelector=_requestDidFinishSelector;
@property(nonatomic) SEL requestDidFailedSelector; // @synthesize requestDidFailedSelector=_requestDidFailedSelector;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *v; // @synthesize v=_v;
@property(retain, nonatomic) NSString *apiMethod; // @synthesize apiMethod=_apiMethod;
@property(nonatomic) _Bool needEcode; // @synthesize needEcode=_needEcode;
@property(retain, nonatomic) TBSDKMTOPServer *mtopRequest; // @synthesize mtopRequest=_mtopRequest;
- (void).cxx_destruct;
- (id)processModel:(id)arg1 withTrackParams:(id)arg2;
- (id)preprocessUTData:(id)arg1;
- (id)dataDicWithOutSession;
- (id)dataDic;
- (void)responseFailed;
- (_Bool)isAuthRejectError;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (id)error;
@property(readonly, nonatomic) NSDictionary *responseJSON;
@property(readonly, nonatomic) NSString *responseString;
- (id)mappingResponseJson:(id)arg1;
- (void)cancel;
- (id)sendSynchronousRequest;
- (void)sendRequest;
- (void)sendAsyncRequest;
- (void)removeParam:(id)arg1;
- (void)addParam:(id)arg1 forKey:(id)arg2;
- (void)addDataParam:(id)arg1 forKey:(id)arg2;
- (void)addDataParamDic:(id)arg1;
- (_Bool)isLoading;
@property(readonly, nonatomic) NSDictionary *params;
- (void)usePost:(_Bool)arg1;
- (id)initWithMethod:(id)arg1;
- (id)init;
- (void)prepareUserParams;
- (void)prepareParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
