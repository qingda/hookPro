//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JHSDataSourceParams, NSDictionary, NSMutableArray, NSMutableSet;

@interface JHSDataSource : NSObject
{
    unsigned long long _currentPage;	// 8 = 0x8
    _Bool _preloading;	// 16 = 0x10
    _Bool _hasMore;	// 17 = 0x11
    _Bool _paramsChanged;	// 18 = 0x12
    _Bool _autoPreload;	// 19 = 0x13
    CDUnknownBlockType _buildRequestBlock;	// 24 = 0x18
    CDUnknownBlockType _sendRequestBlock;	// 32 = 0x20
    CDUnknownBlockType _cancelRequestBlock;	// 40 = 0x28
    CDUnknownBlockType _dataSourceFinishedBlock;	// 48 = 0x30
    CDUnknownBlockType _dataSourceFailedBlock;	// 56 = 0x38
    CDUnknownBlockType _dataSourceBeforeBuildingRequestBlock;	// 64 = 0x40
    CDUnknownBlockType _parseBlock;	// 72 = 0x48
    CDUnknownBlockType _preprocessBlock;	// 80 = 0x50
    CDUnknownBlockType _modelMappingBlock;	// 88 = 0x58
    CDUnknownBlockType _postProcessBlock;	// 96 = 0x60
    CDUnknownBlockType _removeDuplicateBlock;	// 104 = 0x68
    CDUnknownBlockType _isEndedBlock;	// 112 = 0x70
    long long _pageSize;	// 120 = 0x78
    JHSDataSourceParams *_extraParams;	// 128 = 0x80
    NSDictionary *_firstPageParams;	// 136 = 0x88
    id _request;	// 144 = 0x90
    NSMutableArray *_stageItems;	// 152 = 0x98
    NSMutableSet *_itemIds;	// 160 = 0xa0
    id _preloadObj;	// 168 = 0xa8
}

+ (id)ProcessQueue;
@property(retain, nonatomic) id preloadObj; // @synthesize preloadObj=_preloadObj;
@property(retain, nonatomic) NSMutableSet *itemIds; // @synthesize itemIds=_itemIds;
@property(retain, nonatomic) NSMutableArray *stageItems; // @synthesize stageItems=_stageItems;
@property(retain, nonatomic) id request; // @synthesize request=_request;
@property(nonatomic) _Bool autoPreload; // @synthesize autoPreload=_autoPreload;
@property(retain, nonatomic) NSDictionary *firstPageParams; // @synthesize firstPageParams=_firstPageParams;
@property(retain, nonatomic) JHSDataSourceParams *extraParams; // @synthesize extraParams=_extraParams;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) CDUnknownBlockType isEndedBlock; // @synthesize isEndedBlock=_isEndedBlock;
@property(copy, nonatomic) CDUnknownBlockType removeDuplicateBlock; // @synthesize removeDuplicateBlock=_removeDuplicateBlock;
@property(copy, nonatomic) CDUnknownBlockType postProcessBlock; // @synthesize postProcessBlock=_postProcessBlock;
@property(copy, nonatomic) CDUnknownBlockType modelMappingBlock; // @synthesize modelMappingBlock=_modelMappingBlock;
@property(copy, nonatomic) CDUnknownBlockType preprocessBlock; // @synthesize preprocessBlock=_preprocessBlock;
@property(copy, nonatomic) CDUnknownBlockType parseBlock; // @synthesize parseBlock=_parseBlock;
@property(copy, nonatomic) CDUnknownBlockType dataSourceBeforeBuildingRequestBlock; // @synthesize dataSourceBeforeBuildingRequestBlock=_dataSourceBeforeBuildingRequestBlock;
@property(copy, nonatomic) CDUnknownBlockType dataSourceFailedBlock; // @synthesize dataSourceFailedBlock=_dataSourceFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType dataSourceFinishedBlock; // @synthesize dataSourceFinishedBlock=_dataSourceFinishedBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelRequestBlock; // @synthesize cancelRequestBlock=_cancelRequestBlock;
@property(copy, nonatomic) CDUnknownBlockType sendRequestBlock; // @synthesize sendRequestBlock=_sendRequestBlock;
@property(copy, nonatomic) CDUnknownBlockType buildRequestBlock; // @synthesize buildRequestBlock=_buildRequestBlock;
- (void).cxx_destruct;
- (_Bool)isFirstPage:(unsigned long long)arg1;
- (_Bool)hasMore;
- (_Bool)isEmpty;
- (_Bool)isLoading;
- (void)removeData:(id)arg1;
- (long long)currentPage;
- (id)allItems;
- (id)itemAtIndex:(long long)arg1;
- (unsigned long long)itemsCount;
- (void)cancel;
- (void)loadNextPage;
- (void)loadPage:(unsigned long long)arg1 cleanAfterLoaded:(_Bool)arg2;
- (void)triggerPreload;
- (void)reload;
- (void)processParsedObject:(id)arg1;
- (_Bool)isPreloaded;
- (_Bool)isPreloading;
- (void)setCurrentPage:(unsigned long long)arg1;
- (void)setPreloading:(_Bool)arg1;
- (void)setLoadingEnd;
- (void)clean;
- (void)doInitiate;
- (id)init;

@end
