//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBAppLifePerformance : NSObject
{
}

+ (id)currentLogFileHandle;
+ (void)writeLog:(id)arg1;
+ (void)writeLog:(id)arg1 andBCurThread:(_Bool)arg2;
+ (_Bool)isAppFirstLaunch;
+ (id)registerAppMonitor;
+ (void)performanceDataWriteTofile:(id)arg1 andValue:(id)arg2 andLaunchType:(id)arg3;
+ (void)monitorLaunchItem:(id)arg1 andTime:(id)arg2 andBCurThread:(_Bool)arg3 andLaunchType:(id)arg4;
+ (void)monitorLaunchItem:(id)arg1 andTime:(id)arg2;
+ (void)uploadPerformanceWithLaunchItems:(id)arg1 delayLaunchTime:(float)arg2;

@end
