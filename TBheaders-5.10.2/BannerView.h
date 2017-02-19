//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CellComponent.h"

#import "ComponentProtocol-Protocol.h"
#import "TBCycleScrollViewDatasource-Protocol.h"
#import "TBCycleScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, TBCycleScrollView;

@interface BannerView : CellComponent <TBCycleScrollViewDatasource, TBCycleScrollViewDelegate, ComponentProtocol>
{
    TBCycleScrollView *_bannerView;	// 8 = 0x8
    NSMutableArray *_bannerData;	// 16 = 0x10
    NSMutableDictionary *_bannerItemDict;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableDictionary *bannerItemDict; // @synthesize bannerItemDict=_bannerItemDict;
@property(retain, nonatomic) NSMutableArray *bannerData; // @synthesize bannerData=_bannerData;
@property(retain, nonatomic) TBCycleScrollView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)fillWithData:(id)arg1 withTimestamp:(long long)arg2;
- (void)didClickPage:(id)arg1 atIndex:(long long)arg2;
- (id)csView:(id)arg1 pageAtIndex:(long long)arg2;
- (long long)numberOfPages:(id)arg1;
- (void)setBannerData:(id)arg1 withTimestamp:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
