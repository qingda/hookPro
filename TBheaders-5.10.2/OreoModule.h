//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface OreoModule : TBJSONModel
{
    long long _lastModifyTime;	// 8 = 0x8
    NSString *_moduleData;	// 16 = 0x10
    NSString *_moduleName;	// 24 = 0x18
    NSString *_version;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *moduleData; // @synthesize moduleData=_moduleData;
@property(nonatomic) long long lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
- (void).cxx_destruct;

@end

