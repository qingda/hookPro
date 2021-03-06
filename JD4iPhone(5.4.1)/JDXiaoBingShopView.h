//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDImageView, NSMutableArray, UIButton, UIImageView, UILabel;

@interface JDXiaoBingShopView : UIView
{
    JDImageView *shopImageView_;
    UILabel *shopTitle_;
    _Bool hasCoupon_;
    _Bool hasNew_;
    _Bool is3rdShop_;
    float score_;
    int followCount_;
    UIButton *m_contentView;
    UIImageView *m_shopCircleBg;
    UIImageView *m_couponIcon;
    UIImageView *m_newStyleIcon;
    UILabel *m_scoreValue;
    UILabel *m_concernText;
    UILabel *m_scoreText;
    NSMutableArray *m_ratingStarsArr;
}

@property(nonatomic) int m_followCount; // @synthesize m_followCount=followCount_;
@property(nonatomic) float m_score; // @synthesize m_score=score_;
@property(nonatomic) _Bool m_hasNew; // @synthesize m_hasNew=hasNew_;
@property(nonatomic) _Bool m_is3rdShop; // @synthesize m_is3rdShop=is3rdShop_;
@property(nonatomic) _Bool m_hasCoupon; // @synthesize m_hasCoupon=hasCoupon_;
@property(retain, nonatomic) UILabel *m_shopTitle; // @synthesize m_shopTitle=shopTitle_;
@property(retain, nonatomic) JDImageView *m_shopImageView; // @synthesize m_shopImageView=shopImageView_;
- (void)shopItemClick;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resizeViewLayout:(struct CGRect)arg1;
- (void)dealloc;

@end

