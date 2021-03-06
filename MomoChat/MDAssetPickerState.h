//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface MDAssetPickerState : NSObject
{
    _Bool _isOrigin;
    _Bool _directlyEnterCameraRoll;
    int _state;
    id _assetsLibrary;
    unsigned long long _selectedCount;
    long long _selectionLimit;
    unsigned long long _currentAlbumIndex;
    NSMutableArray *_assetGroups;
    NSMutableArray *_selectedAssetsArray;
    NSMutableDictionary *_selectedAssetIndexDic;
    NSMutableDictionary *_selectedAssetArrayIdxDic;
    NSMutableArray *_originAssetsArray;
    NSMutableDictionary *_originAssetIndexDic;
    NSMutableDictionary *_originAssetArrayIdxDic;
    long long _cameraRollIndex;
}

@property(nonatomic) long long cameraRollIndex; // @synthesize cameraRollIndex=_cameraRollIndex;
@property(retain, nonatomic) NSMutableDictionary *originAssetArrayIdxDic; // @synthesize originAssetArrayIdxDic=_originAssetArrayIdxDic;
@property(retain, nonatomic) NSMutableDictionary *originAssetIndexDic; // @synthesize originAssetIndexDic=_originAssetIndexDic;
@property(retain, nonatomic) NSMutableArray *originAssetsArray; // @synthesize originAssetsArray=_originAssetsArray;
@property(retain, nonatomic) NSMutableDictionary *selectedAssetArrayIdxDic; // @synthesize selectedAssetArrayIdxDic=_selectedAssetArrayIdxDic;
@property(retain, nonatomic) NSMutableDictionary *selectedAssetIndexDic; // @synthesize selectedAssetIndexDic=_selectedAssetIndexDic;
@property(retain, nonatomic) NSMutableArray *selectedAssetsArray; // @synthesize selectedAssetsArray=_selectedAssetsArray;
@property(retain, nonatomic) NSMutableArray *assetGroups; // @synthesize assetGroups=_assetGroups;
@property(nonatomic) _Bool directlyEnterCameraRoll; // @synthesize directlyEnterCameraRoll=_directlyEnterCameraRoll;
@property(nonatomic) _Bool isOrigin; // @synthesize isOrigin=_isOrigin;
@property(nonatomic) unsigned long long currentAlbumIndex; // @synthesize currentAlbumIndex=_currentAlbumIndex;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(nonatomic) unsigned long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(retain, nonatomic) id assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void).cxx_destruct;
- (void)fetchAssetsFromAlbum:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)assetForOriginIndex:(unsigned long long)arg1;
- (id)assetForSelectedIndex:(unsigned long long)arg1;
- (id)currentAlbumOriginAssetsIndexSet;
- (id)currentAlbumSelectedAssetsIndexSet;
- (void)changeOriginState:(_Bool)arg1 forAsset:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)changeSelectionState:(_Bool)arg1 forAsset:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)changeSelectionState:(_Bool)arg1 forAsset:(id)arg2;
@property(readonly, nonatomic) NSArray *selectedAssets; // @dynamic selectedAssets;
- (id)init;

@end

