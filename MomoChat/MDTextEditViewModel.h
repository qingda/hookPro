//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDTextEditViewModel : NSObject
{
    NSString *_placeHoder;
    NSString *_text;
    NSString *_bottomTipsText;
    NSString *_titleText;
    NSString *_rightNaviItemTitle;
    long long _limitLength;
}

@property(nonatomic) long long limitLength; // @synthesize limitLength=_limitLength;
@property(copy, nonatomic) NSString *rightNaviItemTitle; // @synthesize rightNaviItemTitle=_rightNaviItemTitle;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *bottomTipsText; // @synthesize bottomTipsText=_bottomTipsText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *placeHoder; // @synthesize placeHoder=_placeHoder;
- (void).cxx_destruct;

@end

