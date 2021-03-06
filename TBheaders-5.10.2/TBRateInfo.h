//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TBRateInfo : NSObject
{
    NSString *_feedId;	// 8 = 0x8
    NSString *_ratedUID;	// 16 = 0x10
    NSString *_feedback;	// 24 = 0x18
    NSArray *_fileIds;	// 32 = 0x20
    NSString *_source;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *fileIds; // @synthesize fileIds=_fileIds;
@property(retain, nonatomic) NSString *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSString *ratedUID; // @synthesize ratedUID=_ratedUID;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (id)initWithID:(id)arg1 ratedUser:(id)arg2 feedback:(id)arg3;
- (id)initWithID:(id)arg1 ratedUser:(id)arg2;

@end

