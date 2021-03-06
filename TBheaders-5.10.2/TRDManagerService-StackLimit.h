//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRDManagerService.h"

@class NSLock;

@interface TRDManagerService (StackLimit)
- (void)unlockUFDLogStack:(long long)arg1;
- (_Bool)tryLockUFDLogStack:(long long)arg1;
- (void)unlockStack:(id)arg1;
- (_Bool)tryLockStack:(id)arg1;

// Remaining properties
@property(nonatomic) long long curLogMemorySize; // @dynamic curLogMemorySize;
@property(nonatomic) long long ufdLogCount; // @dynamic ufdLogCount;
@property(retain, nonatomic) NSLock *ufdLogLock; // @dynamic ufdLogLock;
@property(nonatomic) long long ufdLogMemory; // @dynamic ufdLogMemory;
@end

