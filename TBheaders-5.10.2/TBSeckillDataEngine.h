//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBSeckillAnswerService, TBSeckillBusinessModel, TBSeckillOrderService, TBSeckillQuestionModel;
@protocol TBSeckillDelegate;

@interface TBSeckillDataEngine : NSObject
{
    _Bool _isInQuestionVC;	// 8 = 0x8
    TBSeckillBusinessModel *_businessModel;	// 16 = 0x10
    TBSeckillQuestionModel *_questionModel;	// 24 = 0x18
    id <TBSeckillDelegate> _delegate;	// 32 = 0x20
    TBSeckillAnswerService *_seckillAnswerService;	// 40 = 0x28
    TBSeckillOrderService *_orderService;	// 48 = 0x30
    NSString *_answer;	// 56 = 0x38
}

@property(nonatomic) _Bool isInQuestionVC; // @synthesize isInQuestionVC=_isInQuestionVC;
@property(retain, nonatomic) NSString *answer; // @synthesize answer=_answer;
@property(retain, nonatomic) TBSeckillOrderService *orderService; // @synthesize orderService=_orderService;
@property(retain, nonatomic) TBSeckillAnswerService *seckillAnswerService; // @synthesize seckillAnswerService=_seckillAnswerService;
@property(nonatomic) __weak id <TBSeckillDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBSeckillQuestionModel *questionModel; // @synthesize questionModel=_questionModel;
@property(retain, nonatomic) TBSeckillBusinessModel *businessModel; // @synthesize businessModel=_businessModel;
- (void).cxx_destruct;
- (void)loadToolBar:(_Bool)arg1;
- (void)goback2detailvc;
- (void)showLoadingView:(_Bool)arg1;
- (void)showToast:(id)arg1;
- (void)createOrderSuccess:(id)arg1;
- (void)createOrderFailed:(id)arg1;
- (void)requestCreateOrder:(id)arg1 stockResponseModel:(id)arg2;
- (void)stockRequestFailed;
- (void)stockRequestFinished:(id)arg1;
- (void)checkStockWithUserId:(id)arg1 itemId:(id)arg2 answer:(id)arg3 sku:(id)arg4;
- (void)getQuestion:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 isInQuestionVC:(_Bool)arg2 businessModel:(id)arg3 questionModel:(id)arg4;

@end

