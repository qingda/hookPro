//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MPSDKUtil : NSObject
{
}

+ (id)pathForDocumentsResource:(id)arg1;
+ (double)getBrightness;
+ (double)getDpi;
+ (struct CGSize)getResolution;
+ (long long)newtworkType;
+ (unsigned int)CRC32Value:(id)arg1;
+ (unsigned int)CRC32UTDID;
+ (id)newUUIDString;
+ (id)getClickIdByType:(id)arg1;
+ (int)currentTimeInseconds;
+ (long long)currentTimeInMilliseconds;
+ (int)getAppNums;
+ (float)getBatteryLevel;
+ (id)getAdId;
+ (id)getIdfa;
+ (id)deviceIdentifierForAdvertising;
+ (id)locationToData:(id)arg1;
+ (id)getLocationData;
+ (id)getLocation;
+ (short)isRoot;
+ (_Bool)isDeviceJailBreak;
+ (int)getSystemVersion;
+ (id)appPackageNameString;
+ (char *)shortToBytes:(short)arg1;
+ (char *)byteToBytes:(short)arg1;
+ (char *)integerToBytes:(unsigned int)arg1;
- (void)test;

@end
