//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBThreadSynProtocol-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface TBThreadSynWorker : NSObject <TBThreadSynProtocol>
{
    NSObject<OS_dispatch_queue> *_synTaskQueue;	// 8 = 0x8
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synTaskQueue; // @synthesize synTaskQueue=_synTaskQueue;
- (void).cxx_destruct;
- (id)getAssociatedInnerMutexLockWrapper:(id)arg1;
- (id)getAssociatedInnerRWLockWrapper:(id)arg1;
- (void)synchronizedTaskWithKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)writeTaskWithKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)readTaskWithKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

