//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSDictionary, NSString;

@interface TMMarketComponentBulletinMessageModel : TMMarketComponentBaseModel
{
    NSString *_msgType;	// 16 = 0x10
    NSString *_msg;	// 24 = 0x18
    NSDictionary *_ext;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

