//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDUserProfile, NSString;

@interface MomoBlockUser : NSObject
{
    MDUserProfile *upi;
    NSString *blockTime;
}

@property(retain, nonatomic) NSString *blockTime; // @synthesize blockTime;
@property(retain, nonatomic) MDUserProfile *upi; // @synthesize upi;
- (void)dealloc;

@end

