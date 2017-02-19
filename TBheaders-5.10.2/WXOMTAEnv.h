//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface WXOMTAEnv : NSObject
{
    _Bool _jailbroken;	// 8 = 0x8
    NSString *_platform;	// 16 = 0x10
    NSString *_os_version;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
    NSString *_resolution;	// 40 = 0x28
    NSString *_deviceid;	// 48 = 0x30
    NSString *_mccmnc;	// 56 = 0x38
    NSString *_timezone;	// 64 = 0x40
    NSString *_app_version;	// 72 = 0x48
    NSString *_sdk_version;	// 80 = 0x50
    NSString *_devicename;	// 88 = 0x58
    NSString *_modulename;	// 96 = 0x60
    NSUUID *_ifa;	// 104 = 0x68
    NSUUID *_ifv;	// 112 = 0x70
    NSString *_wf;	// 120 = 0x78
    NSArray *_instantEventList;	// 128 = 0x80
    NSArray *_ignoreEventList;	// 136 = 0x88
}

@property(retain, nonatomic) NSArray *ignoreEventList; // @synthesize ignoreEventList=_ignoreEventList;
@property(retain, nonatomic) NSArray *instantEventList; // @synthesize instantEventList=_instantEventList;
@property(retain, nonatomic) NSString *wf; // @synthesize wf=_wf;
@property _Bool jailbroken; // @synthesize jailbroken=_jailbroken;
@property(retain, nonatomic) NSUUID *ifv; // @synthesize ifv=_ifv;
@property(retain, nonatomic) NSUUID *ifa; // @synthesize ifa=_ifa;
@property(retain, nonatomic) NSString *modulename; // @synthesize modulename=_modulename;
@property(retain, nonatomic) NSString *devicename; // @synthesize devicename=_devicename;
@property(retain, nonatomic) NSString *sdk_version; // @synthesize sdk_version=_sdk_version;
@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *mccmnc; // @synthesize mccmnc=_mccmnc;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(retain, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void)dealloc;

@end
