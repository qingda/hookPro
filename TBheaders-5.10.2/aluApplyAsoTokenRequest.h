//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluBaseRequest.h"

@class NSDictionary, aluApplyAsoTokenInfo;

@interface aluApplyAsoTokenRequest : aluBaseRequest
{
    aluApplyAsoTokenInfo *_request;	// 8 = 0x8
    NSDictionary *_ext;	// 16 = 0x10
}

@property(copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) aluApplyAsoTokenInfo *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)userId;
- (_Bool)doIsUnitSupported;

@end

