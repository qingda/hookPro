//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSBasicService.h"

@interface TBSNSAccountService : TBSNSBasicService
{
    Class _delegateClass;	// 8 = 0x8
}

+ (id)genKey:(id)arg1;
+ (void)setNewFeedCount:(unsigned long long)arg1;
+ (void)setAllFeedCount:(unsigned long long)arg1;
+ (unsigned long long)allFeedCount;
+ (id)accountService;
- (void)model:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)modelDidFinishLoad:(id)arg1;
- (void)useDefaultItemClass;

@end

