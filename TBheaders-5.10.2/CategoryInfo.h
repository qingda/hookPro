//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CategoryInfo : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    NSString *_imageUrl;	// 24 = 0x18
    NSString *_color;	// 32 = 0x20
    NSString *_contentId;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

