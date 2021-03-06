//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDImageCache.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface JDReactImageStoreManager : SDImageCache <RCTBridgeModule>
{
}

+ (id)__rct_export__733;
+ (id)__rct_export__412;
+ (id)__rct_export__311;
+ (id)__rct_export__240;
+ (void)load;
+ (id)moduleName;
- (void)addImageFromBase64:(id)arg1 successCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (void)getBase64ForTag:(id)arg1 successCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (void)hasImageForTag:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeImageForTag:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

