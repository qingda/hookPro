//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JHSTodayNewsDataProvider-Protocol.h"

@class JMQueryServiceTicket, NSMutableArray, NSString;
@protocol JHSTodayNewsDataProviderDelegate;

@interface JHSTodayNewsDataProvider : NSObject <JHSTodayNewsDataProvider>
{
    JMQueryServiceTicket *_ticket;	// 8 = 0x8
    NSMutableArray *_newsList;	// 16 = 0x10
    NSMutableArray *_urlList;	// 24 = 0x18
    NSString *_fetchNum;	// 32 = 0x20
    NSObject<JHSTodayNewsDataProviderDelegate> *_delegate;	// 40 = 0x28
}

@property(nonatomic) __weak NSObject<JHSTodayNewsDataProviderDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *fetchNum; // @synthesize fetchNum=_fetchNum;
@property(retain, nonatomic) NSMutableArray *urlList; // @synthesize urlList=_urlList;
@property(retain, nonatomic) NSMutableArray *newsList; // @synthesize newsList=_newsList;
@property(retain) JMQueryServiceTicket *ticket; // @synthesize ticket=_ticket;
- (void).cxx_destruct;
- (void)fetchFinished;
- (void)fetchFailed;
- (void)cancel;
- (void)refreshData;
- (void)handleTodayNewsDataResponse:(id)arg1;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

