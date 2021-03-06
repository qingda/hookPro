//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBSCSocialParam : NSObject
{
    int _targetType;	// 8 = 0x8
    int _subType;	// 12 = 0xc
    int _paCount;	// 16 = 0x10
    unsigned long long _targetId;	// 24 = 0x18
    NSString *_encryptAccountId;	// 32 = 0x20
    NSString *_targetIdString;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *targetIdString; // @synthesize targetIdString=_targetIdString;
@property(retain, nonatomic) NSString *encryptAccountId; // @synthesize encryptAccountId=_encryptAccountId;
@property(nonatomic) int paCount; // @synthesize paCount=_paCount;
@property(nonatomic) unsigned long long targetId; // @synthesize targetId=_targetId;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(nonatomic) int targetType; // @synthesize targetType=_targetType;
- (void).cxx_destruct;
- (id)initWithTargetId:(unsigned long long)arg1 targetType:(int)arg2 subType:(int)arg3;
- (id)initWithTargetId:(unsigned long long)arg1 targetType:(int)arg2 subType:(int)arg3 paCount:(int)arg4;

@end

