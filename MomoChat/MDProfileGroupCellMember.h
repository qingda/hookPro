//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDProfileGroupCell.h"

@class MomoGroupProfileInfo, UILabel;

@interface MDProfileGroupCellMember : MDProfileGroupCell
{
    UILabel *_subTilteLabel;
    MomoGroupProfileInfo *_currentProfileInfo;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) MomoGroupProfileInfo *currentProfileInfo; // @synthesize currentProfileInfo=_currentProfileInfo;
@property(retain, nonatomic) UILabel *subTilteLabel; // @synthesize subTilteLabel=_subTilteLabel;
- (void).cxx_destruct;
- (void)gotoUserProfile:(id)arg1;
- (void)inviteMember;
- (void)setMembersOnTheView:(id)arg1 isHasInvitingButton:(_Bool)arg2;
- (void)bindModel:(id)arg1;
- (void)layoutSubviews;

@end
