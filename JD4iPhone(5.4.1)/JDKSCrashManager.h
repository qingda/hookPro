//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDCrashDAO;

@interface JDKSCrashManager : NSObject
{
    long long _reportLimitNumber;
    JDCrashDAO *_sendDao;
}

+ (id)crashTimeConvert:(id)arg1;
+ (void)clearAllReports;
+ (void)launchKSCrash;
+ (void)installKSCrash;
+ (id)sharedInstance;
@property(retain, nonatomic) JDCrashDAO *sendDao; // @synthesize sendDao=_sendDao;
@property(nonatomic) long long reportLimitNumber; // @synthesize reportLimitNumber=_reportLimitNumber;
- (void).cxx_destruct;
- (void)sendCrashReports;
- (id)initUniqueInstance;

@end

