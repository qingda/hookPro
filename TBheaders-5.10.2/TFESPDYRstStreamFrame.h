//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFESPDYFrame.h"

@interface TFESPDYRstStreamFrame : TFESPDYFrame
{
    unsigned int _streamId;	// 8 = 0x8
    unsigned int _statusCode;	// 12 = 0xc
}

@property(nonatomic) unsigned int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) unsigned int streamId; // @synthesize streamId=_streamId;

@end

