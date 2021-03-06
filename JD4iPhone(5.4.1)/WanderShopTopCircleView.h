//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"
#import "WanderShopCircleDelegate.h"

@class NSArray, NSString;

@interface WanderShopTopCircleView : UIView <UIScrollViewDelegate, WanderShopCircleDelegate>
{
    NSArray *_topCircleListArray;
    CDUnknownBlockType _circleClicked;
    CDUnknownBlockType _goCircleList;
}

@property(copy, nonatomic) CDUnknownBlockType goCircleList; // @synthesize goCircleList=_goCircleList;
@property(copy, nonatomic) CDUnknownBlockType circleClicked; // @synthesize circleClicked=_circleClicked;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(nonatomic) long long currentPage; // @dynamic currentPage;
- (void)scrollViewDidScroll:(id)arg1;
- (double)circleTopViewContentHeight;
- (double)circleTopViewHeight;
@property(retain, nonatomic) NSArray *topCircleListArray; // @synthesize topCircleListArray=_topCircleListArray;
- (void)drawRect:(struct CGRect)arg1;
- (void)configAddSingleView:(id)arg1;
- (void)joinCircle:(id)arg1;
- (void)joinCircle:(id)arg1 CircleCell:(id)arg2;
- (void)openCircle:(id)arg1;
- (void)slideToMore;
- (void)addSingleViewClicked;
- (void)refreshSubViews;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

