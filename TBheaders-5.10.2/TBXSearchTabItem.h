//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBXSearchTabAction, TBXSearchTabShow;

@interface TBXSearchTabItem : TBJSONModel
{
    _Bool _selected;	// 8 = 0x8
    NSString *_bizName;	// 16 = 0x10
    TBXSearchTabShow *_show;	// 24 = 0x18
    TBXSearchTabAction *_tabAction;	// 32 = 0x20
}

+ (_Bool)strictMode;
@property(retain, nonatomic) TBXSearchTabAction *tabAction; // @synthesize tabAction=_tabAction;
@property(retain, nonatomic) TBXSearchTabShow *show; // @synthesize show=_show;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
- (void).cxx_destruct;
- (id)supportTypes;
- (_Bool)isValid;

@end
