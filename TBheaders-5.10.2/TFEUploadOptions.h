//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFEUploadOptions : NSObject
{
    double _connectionTimeout;	// 8 = 0x8
    id _userInfo;	// 16 = 0x10
}

+ (id)optionsWithUserInfo:(id)arg1 connectionTimeout:(int)arg2;
+ (id)optionsWithUserInfo:(id)arg1;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
- (void).cxx_destruct;
- (id)initWithUserInfo:(id)arg1;
- (id)initWithUserInfo:(id)arg1 connectionTimeout:(int)arg2;

@end

