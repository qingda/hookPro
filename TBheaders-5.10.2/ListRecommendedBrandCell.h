//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SearchItemBaseCell-Protocol.h"

@class NSArray, NSIndexPath, NSString, UIImageView, UILabel, UIView;

@interface ListRecommendedBrandCell : UICollectionViewCell <SearchItemBaseCell>
{
    id _delegate;	// 8 = 0x8
    UIView *_bgView;	// 16 = 0x10
    NSArray *_itemImgViews;	// 24 = 0x18
    UIView *_logoBGView;	// 32 = 0x20
    UIImageView *_logoImgView;	// 40 = 0x28
    UILabel *_logoLabel;	// 48 = 0x30
    NSIndexPath *_indexPath;	// 56 = 0x38
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UILabel *logoLabel; // @synthesize logoLabel=_logoLabel;
@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) UIView *logoBGView; // @synthesize logoBGView=_logoBGView;
@property(retain, nonatomic) NSArray *itemImgViews; // @synthesize itemImgViews=_itemImgViews;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configWithData:(id)arg1;
- (void)updateWithIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
