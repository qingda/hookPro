//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDMainPageRefreshHeaderContent.h"

@class DeliveryStaffView, NSString, UIImageView, UILabel;

@interface JDMainPageRefreshHeaderContentDeliveryView : UIView <JDMainPageRefreshHeaderContent>
{
    UIView *_contentView;
    UILabel *_statusLabel;
    UIImageView *_staffImageView;
    UIImageView *_boxImageView;
    DeliveryStaffView *_deliveryStaffView;
    UIImageView *_refreshTitleImageView;
    double _frameHeight;
}

- (void).cxx_destruct;
- (void)offsetDidUpdate:(double)arg1;
- (void)refreshCanLoading;
- (void)refreshLoading;
- (void)refreshPulling;
- (void)refreshNomal;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
