//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol MDContactGroupDataManagerDelegate <NSObject>

@optional
- (void)loadRecommendResult:(_Bool)arg1 data:(NSArray *)arg2 message:(NSString *)arg3;
- (void)loadFileCategoryResult:(_Bool)arg1 data:(NSArray *)arg2 message:(NSString *)arg3;
- (void)loadResult:(_Bool)arg1 data:(NSArray *)arg2 message:(NSString *)arg3;
@end

