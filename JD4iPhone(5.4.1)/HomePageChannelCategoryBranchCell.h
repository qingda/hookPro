//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "HomePageChannelDisplayItem.h"
#import "HomePageChannelInteractiveItem.h"

@class HomePageChannelCategoryFourBranchView, NSString;

@interface HomePageChannelCategoryBranchCell : UITableViewCell <HomePageChannelDisplayItem, HomePageChannelInteractiveItem>
{
    HomePageChannelCategoryFourBranchView *_firstFourBranchView;
    HomePageChannelCategoryFourBranchView *_secondFourBranchView;
    HomePageChannelCategoryFourBranchView *_thirdFourBranchView;
    HomePageChannelCategoryFourBranchView *_fouthFourBranchView;
}

+ (struct CGSize)calculateSizeWithData:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) HomePageChannelCategoryFourBranchView *fouthFourBranchView; // @synthesize fouthFourBranchView=_fouthFourBranchView;
@property(retain, nonatomic) HomePageChannelCategoryFourBranchView *thirdFourBranchView; // @synthesize thirdFourBranchView=_thirdFourBranchView;
@property(retain, nonatomic) HomePageChannelCategoryFourBranchView *secondFourBranchView; // @synthesize secondFourBranchView=_secondFourBranchView;
@property(retain, nonatomic) HomePageChannelCategoryFourBranchView *firstFourBranchView; // @synthesize firstFourBranchView=_firstFourBranchView;
- (void).cxx_destruct;
- (void)tapOnePlace:(CDUnknownBlockType)arg1;
- (void)tapOnePlace:(CDUnknownBlockType)arg1 preIndex:(id)arg2;
- (void)populateWithData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

