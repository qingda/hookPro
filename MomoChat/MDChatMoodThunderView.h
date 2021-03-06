//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDChatMoodBaseView.h"

#import "CAAnimationDelegate.h"

@class NSString, UIImageView, UIView;

@interface MDChatMoodThunderView : MDChatMoodBaseView <CAAnimationDelegate>
{
    UIView *_shakeView;
    UIImageView *_bubbleView;
    UIImageView *_blackBubbleView;
    UIImageView *_leftContentView;
    UIImageView *_rightContentView;
    UIImageView *_whiteTextView;
    UIImageView *_thunderView;
    UIImageView *_pieceView;
}

@property(retain, nonatomic) UIImageView *pieceView; // @synthesize pieceView=_pieceView;
@property(retain, nonatomic) UIImageView *thunderView; // @synthesize thunderView=_thunderView;
@property(retain, nonatomic) UIImageView *whiteTextView; // @synthesize whiteTextView=_whiteTextView;
@property(retain, nonatomic) UIImageView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain, nonatomic) UIImageView *leftContentView; // @synthesize leftContentView=_leftContentView;
@property(retain, nonatomic) UIImageView *blackBubbleView; // @synthesize blackBubbleView=_blackBubbleView;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UIView *shakeView; // @synthesize shakeView=_shakeView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)addShakeAnimation;
- (void)addPieceAnimation;
- (void)addTextBreakAnimation;
- (void)addWhiteTextAnimation;
- (void)addBubbleViewAnimation;
- (void)addThunderAnimation;
- (double)breakHorizontalMargin;
- (double)breakVerticalMargin;
- (double)breakAnagle;
- (void)displayInAnimatedState;
- (void)displayInReadyState;
- (void)stopAnimation;
- (void)endAnimation;
- (void)startAnimation;
- (void)setupRightContent:(id)arg1;
- (void)setupLeftContent:(id)arg1;
- (void)setupPieceView:(id)arg1;
- (void)setupBubbleView:(id)arg1;
- (Class)chatLayoutClass;
- (id)initWithFrame:(struct CGRect)arg1 msg:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

