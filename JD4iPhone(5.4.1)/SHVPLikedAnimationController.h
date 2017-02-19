//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSTimer, UIView;

@interface SHVPLikedAnimationController : NSObject
{
    NSTimer *animationTimer;
    _Bool _isDoAnimation;
    NSArray *_heartImageArray;
    UIView *_view;
    NSObject<OS_dispatch_queue> *_animationQueue;
    long long _latestLikedCount;
    long long _needAnimatedCount;
    struct CGPoint _startPoint;
    struct CGRect _baseViewFrame;
}

@property(nonatomic) struct CGRect baseViewFrame; // @synthesize baseViewFrame=_baseViewFrame;
@property(nonatomic) long long needAnimatedCount; // @synthesize needAnimatedCount=_needAnimatedCount;
@property(nonatomic) long long latestLikedCount; // @synthesize latestLikedCount=_latestLikedCount;
@property(nonatomic) _Bool isDoAnimation; // @synthesize isDoAnimation=_isDoAnimation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) NSArray *heartImageArray; // @synthesize heartImageArray=_heartImageArray;
- (void).cxx_destruct;
- (id)animationSizeArray;
- (id)animationShapeArray;
- (id)animationColorArray;
- (void)p_DoAnimation;
- (void)p_stopTimer;
- (void)p_startTimerWithCount:(long long)arg1;
- (void)startAnimationWithClickedCount:(long long)arg1 WithCountStateIsNew:(_Bool)arg2;
- (void)stopAnimationTimer;
- (void)doAnimationWithLikedCount:(long long)arg1;
- (void)doAnimationWithButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1 mainView:(id)arg2;

@end
