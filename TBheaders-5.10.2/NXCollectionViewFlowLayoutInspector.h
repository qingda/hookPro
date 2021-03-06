//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NXCollectionViewLayoutInspecting-Protocol.h"

@class NSString, UICollectionViewFlowLayout;

@interface NXCollectionViewFlowLayoutInspector : NSObject <NXCollectionViewLayoutInspecting>
{
    _Bool _delegateImplementsReferenceSizeForHeader;	// 8 = 0x8
    _Bool _delegateImplementsReferenceSizeForFooter;	// 9 = 0x9
    UICollectionViewFlowLayout *_layout;	// 16 = 0x10
}

@property(nonatomic) __weak UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)delegateForCollectionView:(id)arg1;
- (double)usedLayoutValueForSize:(struct CGSize)arg1;
- (_Bool)layoutHasSupplementaryViewOfKind:(id)arg1 inSection:(unsigned long long)arg2 collectionView:(id)arg3;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 inSection:(unsigned long long)arg2 collectionView:(id)arg3;
- (unsigned long long)collectionView:(id)arg1 supplementaryNodesOfKind:(id)arg2 inSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 numberOfSectionsForSupplementaryNodeOfKind:(id)arg2;
- (CDStruct_42a63532)collectionView:(id)arg1 constrainedSizeForSupplementaryNodeOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CDStruct_42a63532)collectionView:(id)arg1 constrainedSizeForNodeAtIndexPath:(id)arg2;
- (void)didChangeCollectionViewDelegate:(id)arg1;
- (id)initWithCollectionView:(id)arg1 flowLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

