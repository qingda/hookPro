//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchViewModel.h"

@protocol TBXSearchComboViewComponentBase;

@interface TBXSearchComboViewModelBase : TBSearchViewModel
{
    long long _comboType;	// 8 = 0x8
}

@property(nonatomic) long long comboType; // @synthesize comboType=_comboType;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <TBXSearchComboViewComponentBase> uiComponent; // @dynamic uiComponent;

@end

