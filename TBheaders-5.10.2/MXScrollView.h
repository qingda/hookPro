//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class MXScrollViewDelegateForwarder, NSMutableArray, NSString;
@protocol MXScrollViewDelegate;

@interface MXScrollView : UIScrollView
{
    _Bool _isObserving;	// 8 = 0x8
    _Bool _lock;	// 9 = 0x9
    _Bool _bounces;	// 10 = 0xa
    id <MXScrollViewDelegate> _delegate;	// 16 = 0x10
    MXScrollViewDelegateForwarder *_delegateForwarder;	// 24 = 0x18
    NSMutableArray *_observedViews;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *observedViews; // @synthesize observedViews=_observedViews;
@property(retain, nonatomic) MXScrollViewDelegateForwarder *delegateForwarder; // @synthesize delegateForwarder=_delegateForwarder;
- (void)setBounces:(_Bool)arg1;
- (_Bool)bounces;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)scrollView:(id)arg1 setContentOffset:(struct CGPoint)arg2;
- (void)removeObservedViews;
- (void)addObservedView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverFromView:(id)arg1;
- (void)addObserverToView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <MXScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

