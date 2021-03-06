//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDLaunchAnimationBase.h"

#import "HomePageViewNoUser4.h"
#import "JDLaunchAnimationBaseProtocol.h"
#import "UIScrollViewDelegate.h"

@class HomePageViewNoUser1, HomePageViewNoUser2, HomePageViewNoUser4, MyPageControl, NSString, UIScrollView;

@interface StartAnimationView : JDLaunchAnimationBase <UIScrollViewDelegate, HomePageViewNoUser4, JDLaunchAnimationBaseProtocol>
{
    UIScrollView *_scrollView;
    MyPageControl *_pageControl;
    HomePageViewNoUser1 *_homePageViewNoUser1;
    HomePageViewNoUser2 *_homePageViewNoUser2;
    HomePageViewNoUser4 *_homePageViewNoUser4;
    long long _mta_lastPage;
    id <StartAnimationViewDelegate> delegate;
    CDUnknownBlockType _finishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) id <StartAnimationViewDelegate> delegate; // @synthesize delegate;
- (void)mta_swipeToEnterApp;
- (void)mta_pvPageIndex:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)finish;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

