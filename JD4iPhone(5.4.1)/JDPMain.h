//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBPaymentProtocal.h"

@class NSString;

@interface JDPMain : NSObject <CBPaymentProtocal>
{
    CDUnknownBlockType _completionBlock;
}

+ (id)sharedMain;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)paymentDidNone;
- (void)paymentDidRefreshWithDict:(id)arg1;
- (void)paymentDidFinished;
- (void)paymentDidFailedWithCode:(id)arg1;
- (void)paymentDidCancelled;
- (void)private_logDid;
- (void)private_checkCertificate;
- (id)getJDPayVersion;
- (void)showFreePasswordViewWithBizId:(id)arg1 accountParam:(id)arg2 navigationController:(id)arg3 isHideNavBar:(_Bool)arg4;
- (void)showFreePasswordViewWithPin:(id)arg1 bizType:(id)arg2 navigationController:(id)arg3 isHideNavBar:(_Bool)arg4;
- (void)showFingerprintViewWithBizId:(id)arg1 accountParam:(id)arg2 navigationController:(id)arg3 isHideNavBar:(_Bool)arg4;
- (void)showFingerprintViewWithPin:(id)arg1 bizType:(id)arg2 navigationController:(id)arg3 isHideNavBar:(_Bool)arg4;
- (void)getAccountDictWithPin:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAccountStatusWithPin:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)getAccountStatusWithPin:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closeWithAnimated:(_Bool)arg1;
- (void)delay_QRPay:(id)arg1;
- (void)QRPay:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)delay_visitControl;
- (void)payOutOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)delay_prePaymetType;
- (void)showChannelListbyOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runPrePayChannelWithOrder:(id)arg1 channelID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)delay_payInOrder;
- (void)payInOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runPrePayWithOrder:(id)arg1 channelID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)runWithOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeKeychain;
- (void)registeredService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

