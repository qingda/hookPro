//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDRequestSetup, NSMutableDictionary;

@interface JDNetwork : NSObject
{
    NSMutableDictionary *_requestList;
    JDRequestSetup *_retryLastSetup;
    struct dispatch_queue_s *_ioQueue;
}

+ (void)cancelDownloadRequest:(id)arg1;
+ (void)sendAsynchronousRequest:(id)arg1 receiveResponseBlock:(CDUnknownBlockType)arg2 receiveDataBlock:(CDUnknownBlockType)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (void)cancel:(id)arg1 setup:(id)arg2;
+ (void)startWithTarget:(id)arg1 setups:(id)arg2 loadingText:(id)arg3 waitDailog:(_Bool)arg4 canCancel:(_Bool)arg5 didFinish:(CDUnknownBlockType)arg6 didCancel:(CDUnknownBlockType)arg7 mask:(_Bool)arg8;
+ (void)startWithTarget:(id)arg1 setup:(id)arg2 didFinish:(CDUnknownBlockType)arg3 didCancel:(CDUnknownBlockType)arg4;
+ (void)swizzleTarget:(id)arg1;
+ (void)clear;
+ (id)buildUpParamsWithRequestSetup:(id)arg1;
+ (void)clearCookiesWithURL:(id)arg1;
+ (id)cookiesWithURL:(id)arg1;
+ (void)clearSession;
+ (id)sessionCookies;
+ (_Bool)hasCacheWithSetup:(id)arg1;
+ (id)urlWithSetup:(id)arg1;
+ (id)getCacheWithSetup:(id)arg1;
+ (id)network;
@property(retain, nonatomic) JDRequestSetup *retryLastSetup; // @synthesize retryLastSetup=_retryLastSetup;
@property(retain, nonatomic) NSMutableDictionary *requestList; // @synthesize requestList=_requestList;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)network:(id)arg1 didCancel:(id)arg2;
- (void)network:(id)arg1 didFail:(id)arg2;
- (void)network:(id)arg1 didSuccess:(id)arg2;
- (void)retryWithNetwork:(id)arg1 setup:(id)arg2;
- (void)_complete:(id)arg1 setup:(id)arg2 callbackData:(id)arg3 error:(id)arg4;
- (void)complete:(id)arg1 setup:(id)arg2;
- (id)parseXMLWithData:(id)arg1 errorMsg:(id *)arg2;
- (id)parserJsonWithData:(id)arg1 errorMsg:(id *)arg2;
- (void)hideWaitDailogWithNetwork:(id)arg1;
- (void)showWaitDailog:(id)arg1 network:(id)arg2 mask:(_Bool)arg3;
- (void)cancelLastJDNetworkLoading;
- (void)relaunchWithSetup:(id)arg1;
- (void)destroyAll;
- (id)getAvailableNetworkWithKey:(id)arg1;
- (id)createNetworkWithSetups:(id)arg1;
- (id)getKeyWithSetups:(id)arg1;
- (id)keyForSetup:(id)arg1;
- (void)cancel;
- (void)startWithSetups:(id)arg1 loadingText:(id)arg2 waitDailog:(_Bool)arg3 canCancel:(_Bool)arg4 didFinish:(CDUnknownBlockType)arg5 didCancel:(CDUnknownBlockType)arg6 mask:(_Bool)arg7;
- (void)startWithSetup:(id)arg1 didFinish:(CDUnknownBlockType)arg2 didCancel:(CDUnknownBlockType)arg3;
- (void)startNetworkWith:(id)arg1 setup:(id)arg2 params:(id)arg3;
- (void)dealloc;
- (id)init;

@end

