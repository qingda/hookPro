//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface RangerTextTagAttributeItem : NSObject
{
    _Bool _isValid;	// 8 = 0x8
    NSString *_keyWord;	// 16 = 0x10
    NSMutableDictionary *_attributes;	// 24 = 0x18
    struct _NSRange _range;	// 32 = 0x20
}

@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property _Bool isValid; // @synthesize isValid=_isValid;
@property(retain) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (void)configAttributeString:(id)arg1;
- (id)initWithAttributes:(id)arg1 baseColor:(id)arg2 baseFont:(id)arg3;

@end

