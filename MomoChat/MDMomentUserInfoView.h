//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDUserIconsView, MDUserProfile, MUAvatarView, UILabel;

@interface MDMomentUserInfoView : UIView
{
    id <MDMomentUserInfoViewDelegate> _delegate;
    MUAvatarView *_avatarView;
    UILabel *_nameLabel;
    MDUserIconsView *_iconsView;
    UILabel *_distanceLabel;
    UILabel *_signLabel;
    MDUserProfile *_upi;
}

@property(retain, nonatomic) MDUserProfile *upi; // @synthesize upi=_upi;
@property(retain, nonatomic) UILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) MDUserIconsView *iconsView; // @synthesize iconsView=_iconsView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MUAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <MDMomentUserInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapAvatarView;
- (void)updateSignLabel;
- (void)updateDistanceLabel;
- (void)setupAndUpdateIconsView;
- (void)updateNameLabel;
- (void)updateAvaterView;
- (void)updateAllContent;
- (void)setupSignLabel;
- (void)setupDistanceLabel;
- (void)setupNameLabel;
- (void)setupAvatarView;
- (void)setupAllContent;
- (void)updateMomentUserInfoView:(id)arg1;
- (id)init;

@end

