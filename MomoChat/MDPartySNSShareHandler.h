//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDPartySNSShareHandler : NSObject
{
    int _platform;
    id <MDSNSShareHandlerDelegate> _handlerDelegate;
    NSString *_partyID;
    NSString *_partyName;
    NSString *_partyAvatarUrl;
    NSString *_weixinUrl;
    NSString *_weixinDesc;
}

@property(retain, nonatomic) NSString *weixinDesc; // @synthesize weixinDesc=_weixinDesc;
@property(retain, nonatomic) NSString *weixinUrl; // @synthesize weixinUrl=_weixinUrl;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *partyAvatarUrl; // @synthesize partyAvatarUrl=_partyAvatarUrl;
@property(retain, nonatomic) NSString *partyName; // @synthesize partyName=_partyName;
@property(retain, nonatomic) NSString *partyID; // @synthesize partyID=_partyID;
@property(nonatomic) id <MDSNSShareHandlerDelegate> handlerDelegate; // @synthesize handlerDelegate=_handlerDelegate;
- (void)shareToWx:(id)arg1 avatar:(id)arg2 desc:(id)arg3;
- (void)shareToWxIfNeeded;
- (void)shareToWeixinWithDict:(id)arg1;
- (void)shareToQQZoneWithDict:(id)arg1;
- (void)shareToQQWithDict:(id)arg1;
- (void)sharePartyError:(id)arg1;
- (void)sharePartyFail:(id)arg1;
- (void)sharePartySuccess:(id)arg1;
- (void)shareWithSelectOption:(id)arg1 platform:(int)arg2;
- (void)shareWithSelectOption:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 andPartyID:(id)arg2 partyName:(id)arg3;

@end

