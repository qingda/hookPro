//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol TBAMPServiceDelegateForStudio;

@protocol TBAMPServiceForVideoProtocol <NSObject>
- (void)addDelegate:(id <TBAMPServiceDelegateForStudio>)arg1;
- (void)studioUserInfoByCode:(NSString *)arg1 index:(long long)arg2 size:(long long)arg3 resultAction:(void (^)(id, NSError *))arg4;
- (void)deleteStudioUser:(NSString *)arg1 ccode:(NSString *)arg2 resultAction:(void (^)(id, NSError *))arg3;
- (void)addStudioUser:(NSString *)arg1 nick:(NSString *)arg2 ccode:(NSString *)arg3 headUrl:(NSString *)arg4 resultAction:(void (^)(id, NSError *))arg5;
- (void)studioInfoByCode:(NSString *)arg1 resultAction:(void (^)(id, NSError *))arg2;
- (void)addCountWithCcode:(NSString *)arg1 count:(long long)arg2 resultAction:(void (^)(id, NSError *))arg3;
- (void)sendTextMessage:(NSString *)arg1 ccode:(NSString *)arg2 resultAction:(void (^)(id, NSError *))arg3;
- (NSString *)createStudio:(NSArray *)arg1 resultAction:(void (^)(id, NSError *))arg2;
- (void)resumeStudioByCode:(NSString *)arg1;
- (void)pauseStudioByCode:(NSString *)arg1;
- (NSArray *)newMessageById:(long long)arg1 count:(int)arg2;
@end

