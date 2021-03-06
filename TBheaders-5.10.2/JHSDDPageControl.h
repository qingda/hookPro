//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImage;

@interface JHSDDPageControl : UIControl
{
    _Bool _hidesForSinglePage;	// 8 = 0x8
    _Bool _defersCurrentPageDisplay;	// 9 = 0x9
    int _type;	// 12 = 0xc
    long long _numberOfPages;	// 16 = 0x10
    long long _currentPage;	// 24 = 0x18
    UIColor *_onColor;	// 32 = 0x20
    UIColor *_offColor;	// 40 = 0x28
    UIColor *_onFillColor;	// 48 = 0x30
    UIColor *_offFillColor;	// 56 = 0x38
    UIImage *_onImage;	// 64 = 0x40
    UIImage *_offImage;	// 72 = 0x48
    double _indicatorDiameter;	// 80 = 0x50
    double _indicatorSpace;	// 88 = 0x58
}

@property(nonatomic) double indicatorSpace; // @synthesize indicatorSpace=_indicatorSpace;
@property(nonatomic) double indicatorDiameter; // @synthesize indicatorDiameter=_indicatorDiameter;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property(retain, nonatomic) UIColor *offFillColor; // @synthesize offFillColor=_offFillColor;
@property(retain, nonatomic) UIColor *onFillColor; // @synthesize onFillColor=_onFillColor;
@property(retain, nonatomic) UIColor *offColor; // @synthesize offColor=_offColor;
@property(retain, nonatomic) UIColor *onColor; // @synthesize onColor=_onColor;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool defersCurrentPageDisplay; // @synthesize defersCurrentPageDisplay=_defersCurrentPageDisplay;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)updateCurrentPageDisplay;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)set_offColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithType:(int)arg1;

@end

