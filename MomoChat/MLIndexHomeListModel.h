//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MLIndexHomeListModel : NSObject
{
    NSString *_publishTitle;
    NSString *_publishActions;
    NSString *_publishImageSrc;
    NSString *_forecastAction;
    NSString *_forecastImgSrc;
    NSString *_forecastTitle;
    long long _livingNumb;
    NSString *_liveAction;
    NSString *_liveImgSrc;
    NSString *_liveTitle;
    NSString *_rankTitle;
    NSString *_rankAction;
    NSString *_rankImgSrc;
    NSString *_withdraw;
    NSArray *_livings;
    NSString *_defaultTab;
    long long _refreshTime;
    NSArray *_rankTopList;
}

+ (id)parseIndexHomeListData:(id)arg1;
@property(retain, nonatomic) NSArray *rankTopList; // @synthesize rankTopList=_rankTopList;
@property(nonatomic) long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *defaultTab; // @synthesize defaultTab=_defaultTab;
@property(copy, nonatomic) NSArray *livings; // @synthesize livings=_livings;
@property(copy, nonatomic) NSString *withdraw; // @synthesize withdraw=_withdraw;
@property(copy, nonatomic) NSString *rankImgSrc; // @synthesize rankImgSrc=_rankImgSrc;
@property(copy, nonatomic) NSString *rankAction; // @synthesize rankAction=_rankAction;
@property(copy, nonatomic) NSString *rankTitle; // @synthesize rankTitle=_rankTitle;
@property(copy, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(copy, nonatomic) NSString *liveImgSrc; // @synthesize liveImgSrc=_liveImgSrc;
@property(copy, nonatomic) NSString *liveAction; // @synthesize liveAction=_liveAction;
@property(nonatomic) long long livingNumb; // @synthesize livingNumb=_livingNumb;
@property(copy, nonatomic) NSString *forecastTitle; // @synthesize forecastTitle=_forecastTitle;
@property(copy, nonatomic) NSString *forecastImgSrc; // @synthesize forecastImgSrc=_forecastImgSrc;
@property(copy, nonatomic) NSString *forecastAction; // @synthesize forecastAction=_forecastAction;
@property(copy, nonatomic) NSString *publishImageSrc; // @synthesize publishImageSrc=_publishImageSrc;
@property(copy, nonatomic) NSString *publishActions; // @synthesize publishActions=_publishActions;
@property(copy, nonatomic) NSString *publishTitle; // @synthesize publishTitle=_publishTitle;
- (void).cxx_destruct;

@end
