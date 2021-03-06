//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseResponseModel.h"

#import "ITBOListModel-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBOCommunity, TBOTopic;

@interface TBOSearchResutSet : TBOBaseResponseModel <ITBOListModel>
{
    NSMutableArray<TBOCommunity> *_circleList;	// 8 = 0x8
    NSMutableArray<TBOTopic> *_topicList;	// 16 = 0x10
    long long _totalTopicsCount;	// 24 = 0x18
    long long _totalCirclesCount;	// 32 = 0x20
}

@property(nonatomic) long long totalCirclesCount; // @synthesize totalCirclesCount=_totalCirclesCount;
@property(nonatomic) long long totalTopicsCount; // @synthesize totalTopicsCount=_totalTopicsCount;
@property(retain, nonatomic) NSMutableArray<TBOTopic> *topicList; // @synthesize topicList=_topicList;
@property(retain, nonatomic) NSMutableArray<TBOCommunity> *circleList; // @synthesize circleList=_circleList;
- (void).cxx_destruct;
- (id)items;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

