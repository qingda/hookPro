//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UTMCConfigBusiness.h"

@interface UTMCRealTimeDebugBusiness : UTMCConfigBusiness
{
}

+ (void)registerWindVaneWithClassName:(id)arg1 debugBlock:(CDUnknownBlockType)arg2;
- (void)onAdashConfFail:(id)arg1;
- (void)onNoAdashConfArrived:(id)arg1;
- (void)onAdashConfArrived:(id)arg1 confContent:(id)arg2;
- (void)onPreLoad:(id)arg1 confContent:(id)arg2;
- (id)requiredConfNameList;

@end

