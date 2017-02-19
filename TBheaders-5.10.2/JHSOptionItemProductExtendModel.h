//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSJSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol JHSOptionItemMerit;

@interface JHSOptionItemProductExtendModel : JHSJSONModel
{
    NSString *_fwIcon;	// 8 = 0x8
    NSString *_fwType;	// 16 = 0x10
    NSString *_actIcon;	// 24 = 0x18
    NSString *_bizHomeIcon;	// 32 = 0x20
    NSString *_titleIcon;	// 40 = 0x28
    NSArray *_pics;	// 48 = 0x30
    NSNumber *_remindType;	// 56 = 0x38
    NSArray *_titleIcons;	// 64 = 0x40
    NSArray<JHSOptionItemMerit> *_merits;	// 72 = 0x48
}

@property(copy, nonatomic) NSArray<JHSOptionItemMerit> *merits; // @synthesize merits=_merits;
@property(copy, nonatomic) NSArray *titleIcons; // @synthesize titleIcons=_titleIcons;
@property(retain, nonatomic) NSNumber *remindType; // @synthesize remindType=_remindType;
@property(retain, nonatomic) NSArray *pics; // @synthesize pics=_pics;
@property(copy, nonatomic) NSString *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(copy, nonatomic) NSString *bizHomeIcon; // @synthesize bizHomeIcon=_bizHomeIcon;
@property(copy, nonatomic) NSString *actIcon; // @synthesize actIcon=_actIcon;
@property(copy, nonatomic) NSString *fwType; // @synthesize fwType=_fwType;
@property(copy, nonatomic) NSString *fwIcon; // @synthesize fwIcon=_fwIcon;
- (void).cxx_destruct;

@end
