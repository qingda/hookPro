//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVH5MonitorProtocol-Protocol.h"

@class NSString;

@interface WVH5Monitor : NSObject <WVH5MonitorProtocol>
{
}

+ (id)sharedMonitor;
- (void)jsBridgeInvokeError:(id)arg1 arg:(id)arg2;
- (void)jsBridgeInvoke:(id)arg1;
- (void)receiveMemoryWarning:(id)arg1;
- (void)pageEmpty:(id)arg1 arg:(id)arg2;
- (id)parseResStat:(id)arg1;
- (void)reportPerformance2UT:(id)arg1;
- (id)getH5Point:(id)arg1;
- (void)pageFinishLoad:(id)arg1;
- (void)pageOccurNativeError:(id)arg1 arg:(id)arg2;
- (void)receiveStatusCode:(id)arg1;
- (void)webViewStart:(id)arg1;
- (void)webViewVisit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
