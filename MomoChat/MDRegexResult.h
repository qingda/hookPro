//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDRegexResult : NSObject
{
    _Bool _emotion;
    NSString *_text;
    struct _NSRange _range;
}

@property(nonatomic, getter=isEmotion) _Bool emotion; // @synthesize emotion=_emotion;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;

@end
