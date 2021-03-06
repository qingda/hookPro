//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDNUploadMsgImgPrepareResponse, NSString;

@interface CdnUploadTaskInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFileId;
    NSString *m_nsAesKey;
    int m_nFileLength;
    NSString *m_nsFileMD5;
    NSString *m_nsTransInfo;
    int m_nRetCode;
    NSString *m_nsChatName;
    NSString *m_nsThumbAesKey;
    int m_nThumbImgLength;
    NSString *m_nsThumbMd5;
    int m_nMidimgLength;
    NSString *m_nsStreamId;
    NSString *m_nsImageUrl;
    NSString *m_nsThumbUrl;
    unsigned int m_uiScene;
    unsigned int m_nHitCacheType;
    _Bool m_bNeedSendMsg;
    unsigned long long m_nSvrMsgId;
    _Bool m_bFileExist;
    CDNUploadMsgImgPrepareResponse *m_pbUploadResp;
}

@property(retain, nonatomic) CDNUploadMsgImgPrepareResponse *m_pbUploadResp; // @synthesize m_pbUploadResp;
@property(nonatomic) _Bool m_bFileExist; // @synthesize m_bFileExist;
@property(nonatomic) unsigned long long m_nSvrMsgId; // @synthesize m_nSvrMsgId;
@property(nonatomic) unsigned int m_nHitCacheType; // @synthesize m_nHitCacheType;
@property(nonatomic) _Bool m_bNeedSendMsg; // @synthesize m_bNeedSendMsg;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(retain, nonatomic) NSString *m_nsThumbUrl; // @synthesize m_nsThumbUrl;
@property(retain, nonatomic) NSString *m_nsImageUrl; // @synthesize m_nsImageUrl;
@property(retain, nonatomic) NSString *m_nsStreamId; // @synthesize m_nsStreamId;
@property(retain, nonatomic) NSString *m_nsThumbMd5; // @synthesize m_nsThumbMd5;
@property(nonatomic) int m_nThumbImgLength; // @synthesize m_nThumbImgLength;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(retain, nonatomic) NSString *m_nsTransInfo; // @synthesize m_nsTransInfo;
@property(nonatomic) int m_nMidimgLength; // @synthesize m_nMidimgLength;
@property(retain, nonatomic) NSString *m_nsFileMD5; // @synthesize m_nsFileMD5;
@property(nonatomic) int m_nFileLength; // @synthesize m_nFileLength;
@property(retain, nonatomic) NSString *m_nsThumbAesKey; // @synthesize m_nsThumbAesKey;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileId; // @synthesize m_nsFileId;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (void).cxx_destruct;
- (id)init;

@end

