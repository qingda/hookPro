//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBAMPMessage.h"

@class NSData, NSString;

@interface TBAMPVoiceMessage : TBAMPMessage
{
    NSString *_url;	// 8 = 0x8
    long long _duration;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)parseFromDict:(id)arg1;
- (void)loadFromCoreDataMessage:(id)arg1;
- (void)copyToCoreDataMessage:(id)arg1;
- (void)loadDataWithMessage:(id)arg1;
- (id)ampDeepCopy;
- (id)initWithMessage:(id)arg1;
- (id)initWithJson:(id)arg1;
- (id)toDictionary;

@end

