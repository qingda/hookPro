//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDSHCalendar, JDSHCalendarLineView, UILabel;

@interface JDSHCalendarTableHeadView : UIView
{
    JDSHCalendar *_calendar;
    UILabel *_dayLabel;
    UILabel *_weekLabel;
    JDSHCalendarLineView *_lineView;
}

@property(retain, nonatomic) JDSHCalendarLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *weekLabel; // @synthesize weekLabel=_weekLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) JDSHCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (id)textAttributeWithAlignment:(long long)arg1 fontSize:(double)arg2 color:(id)arg3;
- (id)p_dayInfoFromDate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 Date:(id)arg2;

@end
