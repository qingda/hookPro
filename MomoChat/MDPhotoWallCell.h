//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSIndexPath, UIImageView;

@interface MDPhotoWallCell : UICollectionViewCell
{
    UIImageView *_playIcon;
    NSIndexPath *_indexPath;
    UIImageView *_imageView;
    double _cellSize;
}

@property(nonatomic) double cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
- (void).cxx_destruct;
- (void)fileReceiveFail:(id)arg1;
- (void)fileReceiveFinish:(id)arg1;
- (void)goWithURL:(id)arg1 andPath:(id)arg2;
- (void)showImageWithData:(id)arg1;
- (void)showImageByPath:(id)arg1;
- (void)showImageByUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

