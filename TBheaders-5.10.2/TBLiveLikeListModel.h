//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;
@protocol TBLiveLikeListResultModel;

@interface TBLiveLikeListModel : TBJSONModel
{
    NSArray<TBLiveLikeListResultModel> *_result;	// 8 = 0x8
}

@property(retain, nonatomic) NSArray<TBLiveLikeListResultModel> *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

