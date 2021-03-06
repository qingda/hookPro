//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBHLBaseFeedCell.h"

@class NSString, TBHLCountingLabel, TBHLFeedCellModel, UIButton, UIImageView, UILabel, UIView;

@interface TBHLVoteCell : TBHLBaseFeedCell
{
    int _prosNum;	// 8 = 0x8
    int _consNum;	// 12 = 0xc
    UILabel *_subLabel;	// 16 = 0x10
    UIView *_voteView;	// 24 = 0x18
    UIView *_resultView;	// 32 = 0x20
    UIButton *_prosBt;	// 40 = 0x28
    UIButton *_consBt;	// 48 = 0x30
    UIView *_proview;	// 56 = 0x38
    UIView *_conview;	// 64 = 0x40
    UILabel *_prosLabel;	// 72 = 0x48
    TBHLCountingLabel *_prosCountLabel;	// 80 = 0x50
    UILabel *_consLabel;	// 88 = 0x58
    TBHLCountingLabel *_consCountLabel;	// 96 = 0x60
    TBHLFeedCellModel *_feedModel;	// 104 = 0x68
    NSString *_feedDescription;	// 112 = 0x70
    UIImageView *_vsImageView;	// 120 = 0x78
}

@property(retain, nonatomic) UIImageView *vsImageView; // @synthesize vsImageView=_vsImageView;
@property(copy, nonatomic) NSString *feedDescription; // @synthesize feedDescription=_feedDescription;
@property(nonatomic) int consNum; // @synthesize consNum=_consNum;
@property(nonatomic) int prosNum; // @synthesize prosNum=_prosNum;
@property(nonatomic) __weak TBHLFeedCellModel *feedModel; // @synthesize feedModel=_feedModel;
@property(retain, nonatomic) TBHLCountingLabel *consCountLabel; // @synthesize consCountLabel=_consCountLabel;
@property(retain, nonatomic) UILabel *consLabel; // @synthesize consLabel=_consLabel;
@property(retain, nonatomic) TBHLCountingLabel *prosCountLabel; // @synthesize prosCountLabel=_prosCountLabel;
@property(retain, nonatomic) UILabel *prosLabel; // @synthesize prosLabel=_prosLabel;
@property(retain, nonatomic) UIView *conview; // @synthesize conview=_conview;
@property(retain, nonatomic) UIView *proview; // @synthesize proview=_proview;
@property(retain, nonatomic) UIButton *consBt; // @synthesize consBt=_consBt;
@property(retain, nonatomic) UIButton *prosBt; // @synthesize prosBt=_prosBt;
@property(retain, nonatomic) UIView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) UIView *voteView; // @synthesize voteView=_voteView;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
- (void).cxx_destruct;
- (void)configHLCell:(id)arg1;
- (void)layoutSubviews;
- (void)cellClick;
- (void)setRead:(_Bool)arg1;
- (void)increaseProsNum;
- (void)voteRequest:(id)arg1;
- (void)setHasVote;
- (void)increaseConsNum;
- (void)showResutWithAnimation:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

