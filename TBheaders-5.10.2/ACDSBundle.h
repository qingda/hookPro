//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ACDSBundle : NSObject
{
}

+ (void)notifyForLogout:(id)arg1;
+ (void)notifyForLogin:(id)arg1;
+ (_Bool)listenLoginEvent;
+ (_Bool)cleanAcdsDatabase;
+ (_Bool)setupBlackList;
+ (_Bool)isNotificationOK:(id)arg1;
+ (void)onACCSAisleOk:(id)arg1;
+ (_Bool)startACDSOnlineService;
+ (void)startACDSOfflineService;
+ (_Bool)setupACDS;
+ (_Bool)initACDS;
+ (void)startACDSRuntime;

@end
