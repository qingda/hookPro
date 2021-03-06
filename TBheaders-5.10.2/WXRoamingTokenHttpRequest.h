//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXTokenHttpRequest.h"

#import "TokenLogicBizDelegate-Protocol.h"

@class NSString;

@interface WXRoamingTokenHttpRequest : WXTokenHttpRequest <TokenLogicBizDelegate>
{
    long long _retryCounter;	// 40 = 0x28
}

@property(nonatomic) long long retryCounter; // @synthesize retryCounter=_retryCounter;
- (void)didRequestIMCloudServiceToken:(id)arg1 andUserData:(id)arg2 andError:(id)arg3;
- (_Bool)isJsonResult;
- (_Bool)requestWillStart;
- (id)getStaticParams;
- (_Bool)isRoamingTokenValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

