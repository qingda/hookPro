//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PDViewProtocol.h"

@class NSString, NewProductModel, UIImageView, UILabel;

@interface PDYuyueLiuChengFloorView : UIView <PDViewProtocol>
{
    UILabel *_yuyueLiuChengTitleLabel;
    UILabel *_yuyueLiuChengDetailLabel;
    UIImageView *_yuyueLiuChengDetailIcon;
    UILabel *_yuyueBuyTimeTitleLabel;
    UILabel *_yuyueBuyTimeDetailLabel;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *yuyueBuyTimeDetailLabel; // @synthesize yuyueBuyTimeDetailLabel=_yuyueBuyTimeDetailLabel;
@property(retain, nonatomic) UILabel *yuyueBuyTimeTitleLabel; // @synthesize yuyueBuyTimeTitleLabel=_yuyueBuyTimeTitleLabel;
@property(retain, nonatomic) UIImageView *yuyueLiuChengDetailIcon; // @synthesize yuyueLiuChengDetailIcon=_yuyueLiuChengDetailIcon;
@property(retain, nonatomic) UILabel *yuyueLiuChengDetailLabel; // @synthesize yuyueLiuChengDetailLabel=_yuyueLiuChengDetailLabel;
@property(retain, nonatomic) UILabel *yuyueLiuChengTitleLabel; // @synthesize yuyueLiuChengTitleLabel=_yuyueLiuChengTitleLabel;
- (void).cxx_destruct;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (void)processViewTapped:(id)arg1;
- (void)configGesture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
