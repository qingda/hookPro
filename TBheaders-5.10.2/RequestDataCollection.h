//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RequestDataCollection : NSObject
{
    int _recvBodySize;	// 8 = 0x8
    int _recvHeadSize;	// 12 = 0xc
    int _headerUncpSize;	// 16 = 0x10
    int _headercpSize;	// 20 = 0x14
    int _headBodySize;	// 24 = 0x18
    int _isSSL;	// 28 = 0x1c
    long long _waiting;	// 32 = 0x20
    long long _sendBegin;	// 40 = 0x28
    long long _sendEnd;	// 48 = 0x30
    long long _recvBegin;	// 56 = 0x38
    long long _recvEnd;	// 64 = 0x40
    NSString *_host;	// 72 = 0x48
}

@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) int isSSL; // @synthesize isSSL=_isSSL;
@property(nonatomic) int headBodySize; // @synthesize headBodySize=_headBodySize;
@property(nonatomic) int headercpSize; // @synthesize headercpSize=_headercpSize;
@property(nonatomic) int headerUncpSize; // @synthesize headerUncpSize=_headerUncpSize;
@property(nonatomic) int recvHeadSize; // @synthesize recvHeadSize=_recvHeadSize;
@property(nonatomic) int recvBodySize; // @synthesize recvBodySize=_recvBodySize;
@property(nonatomic) long long recvEnd; // @synthesize recvEnd=_recvEnd;
@property(nonatomic) long long recvBegin; // @synthesize recvBegin=_recvBegin;
@property(nonatomic) long long sendEnd; // @synthesize sendEnd=_sendEnd;
@property(nonatomic) long long sendBegin; // @synthesize sendBegin=_sendBegin;
@property(nonatomic) long long waiting; // @synthesize waiting=_waiting;
- (void).cxx_destruct;
- (id)getDictionary;

@end

