//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MDNearbyRecommendVideoResource : NSObject
{
    NSString *_icon;
    NSString *_title;
    NSString *_desc;
    NSString *_moreGoto;
    NSArray *_videoItems;
}

+ (id)dictionaryToNearbyRecommendVideoResource:(id)arg1;
@property(retain, nonatomic) NSArray *videoItems; // @synthesize videoItems=_videoItems;
@property(retain, nonatomic) NSString *moreGoto; // @synthesize moreGoto=_moreGoto;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void)dealloc;

@end
