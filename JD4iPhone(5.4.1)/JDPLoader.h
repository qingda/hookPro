//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDPLoader : NSObject
{
}

+ (id)fileMD5:(id)arg1;
+ (id)fetchScriptDirectory;
+ (long long)currentVersion;
+ (void)setLogger:(CDUnknownBlockType)arg1;
+ (void)runTestScriptInBundle;
+ (void)updateToVersion:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (_Bool)run;

@end

