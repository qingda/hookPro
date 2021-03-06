//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSDate;

@interface MBTimer : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    NSDate *_previousDate;	// 24 = 0x18
    double _pausedSpeed;	// 32 = 0x20
    _Bool _launched;	// 40 = 0x28
    double _speed;	// 48 = 0x30
    double _time;	// 56 = 0x38
}

+ (id)timerWithHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) _Bool launched; // @synthesize launched=_launched;
@property(nonatomic) double speed; // @synthesize speed=_speed;
- (void).cxx_destruct;
- (void)updateTime;
- (void)stop;
- (void)pause;
- (void)start;
- (void)update;
- (void)reset;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

