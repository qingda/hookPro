//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LbsContactInfoList.h"

@interface SeePeopleNearByLogicController
{
    unsigned long m_uiEventID;	// 4 = 0x4
    unsigned long m_lbsEventID;	// 8 = 0x8
    unsigned long m_uiTryCount;	// 12 = 0xc
//    NSRecursiveLock *m_oLock;	// 16 = 0x10
    LbsContactInfoList *m_lbsContactList;	// 20 = 0x14
//    LocationRetriever *m_locationRetrieve;	// 24 = 0x18
//    id <SeePeopleNearByUIDelegate> m_delegate;	// 28 = 0x1c
    unsigned long m_uiCurOpCode;	// 32 = 0x20
//    CLLocation *m_location;	// 36 = 0x24
}

//@property(retain, nonatomic) CLLocation *m_location; // @synthesize m_location;
//@property(retain, nonatomic) LocationRetriever *m_locationRetrieve; // @synthesize m_locationRetrieve;
@property(retain, nonatomic) LbsContactInfoList *m_lbsContactList; // @synthesize m_lbsContactList;

- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;	// IMP=0x011b1eb1
- (BOOL)CreateJoinLBSRoomEvent:(id)arg1;	// IMP=0x011b1b8f
- (void)tryJoinChatRoom;	// IMP=0x011b1a13
- (void)OnUpdateCertInfo;	// IMP=0x011b1993
- (void)onSelectedWithLbsPoiItem:(id)arg1;	// IMP=0x011b1907
- (void)onSelectedWithLbsContactInfo:(id)arg1;	// IMP=0x011b1819
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;	// IMP=0x011b1097
- (BOOL)CreateLBSFindEvent:(id)arg1;	// IMP=0x011b0c05
- (BOOL)CreateLBSPoiListEvent:(id)arg1;	// IMP=0x011b099b
- (BOOL)CreateClearLBSDataEvent;	// IMP=0x011b06d1
- (void)onRetrieveLocationError:(int)arg1;	// IMP=0x011b05e9
- (void)onRetrieveLocationTimeOut:(id)arg1;	// IMP=0x011b04a7
- (void)onRetrieveLocationOK:(id)arg1;	// IMP=0x011b0209
- (BOOL)clearMyLbsData;	// IMP=0x011b01f9
- (void)cancelUpdateLbsContactInfo;	// IMP=0x011b01db
- (void)updateLbsContactInfo;	// IMP=0x011b01a1
- (void)dealloc;	// IMP=0x011b008d
- (id)initWithDelegate:(id)arg1;	// IMP=0x011afea7
- (id)init;	// IMP=0x011afe69

@end

