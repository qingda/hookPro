//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, NSString;

@interface AppMonitorConfigSystem : NSObject
{
    _Bool _discardAp;	// 8 = 0x8
    int _cacheFlushInterval;	// 12 = 0xc
    int _cacheTriggeCount;	// 16 = 0x10
    int _uploadInterval;	// 20 = 0x14
    int _orangeUploadInterval;	// 24 = 0x18
    NSDictionary *_systemDict;	// 32 = 0x20
    NSDictionary *_defaultSystemDict;	// 40 = 0x28
    NSString *_hotpatchVersion;	// 48 = 0x30
    NSLock *_lock;	// 56 = 0x38
}

+ (id)sharedInstance;
@property(nonatomic) int orangeUploadInterval; // @synthesize orangeUploadInterval=_orangeUploadInterval;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) NSString *hotpatchVersion; // @synthesize hotpatchVersion=_hotpatchVersion;
@property(retain, nonatomic) NSDictionary *defaultSystemDict; // @synthesize defaultSystemDict=_defaultSystemDict;
@property(retain, nonatomic) NSDictionary *systemDict; // @synthesize systemDict=_systemDict;
@property int uploadInterval; // @synthesize uploadInterval=_uploadInterval;
@property int cacheTriggeCount; // @synthesize cacheTriggeCount=_cacheTriggeCount;
@property int cacheFlushInterval; // @synthesize cacheFlushInterval=_cacheFlushInterval;
@property _Bool discardAp; // @synthesize discardAp=_discardAp;
- (void).cxx_destruct;
- (void)_setDiscardAPValue:(id)arg1;
- (void)_setUploadIntervalValue:(id)arg1;
- (void)_setCacheFlushIntervalValue:(id)arg1;
- (id)restoreHotpatchVersion;
- (int)cacheTriggeCount:(id)arg1;
- (void)setDicContent:(id)arg1;
- (id)reflectHotpatchVersion;
- (void)tbHotpatchDownloadRunPatch:(id)arg1;
- (void)dealloc;
- (id)init;

@end
