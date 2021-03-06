//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class ATCLanLanSubaruReportMenuItem, NSMutableArray, NSString, UIButton;
@protocol ATCLanLanSubaruReportMenuDelegate;

@interface ATCLanLanSubaruReportMenuService : NSObject <UIActionSheetDelegate>
{
    _Bool _useDislike;	// 8 = 0x8
    _Bool _display;	// 9 = 0x9
    _Bool _displayDislikeGuideView;	// 10 = 0xa
    id <ATCLanLanSubaruReportMenuDelegate> _delegate;	// 16 = 0x10
    NSString *_contentId;	// 24 = 0x18
    NSString *_trackInfo;	// 32 = 0x20
    UIButton *_reportMenuView;	// 40 = 0x28
    UIButton *_unlikeButton;	// 48 = 0x30
    NSMutableArray *_menuList;	// 56 = 0x38
    NSMutableArray *_currentMenuList;	// 64 = 0x40
    ATCLanLanSubaruReportMenuItem *_dislikeItem;	// 72 = 0x48
    NSString *_dislikeName;	// 80 = 0x50
    NSString *_dislikeType;	// 88 = 0x58
    UIButton *_dislikeGuideView;	// 96 = 0x60
}

+ (id)shareInstance;
@property(nonatomic) _Bool displayDislikeGuideView; // @synthesize displayDislikeGuideView=_displayDislikeGuideView;
@property(retain, nonatomic) UIButton *dislikeGuideView; // @synthesize dislikeGuideView=_dislikeGuideView;
@property(copy, nonatomic) NSString *dislikeType; // @synthesize dislikeType=_dislikeType;
@property(copy, nonatomic) NSString *dislikeName; // @synthesize dislikeName=_dislikeName;
@property(retain, nonatomic) ATCLanLanSubaruReportMenuItem *dislikeItem; // @synthesize dislikeItem=_dislikeItem;
@property(retain, nonatomic) NSMutableArray *currentMenuList; // @synthesize currentMenuList=_currentMenuList;
@property(retain, nonatomic) NSMutableArray *menuList; // @synthesize menuList=_menuList;
@property(nonatomic) _Bool display; // @synthesize display=_display;
@property(retain, nonatomic) UIButton *unlikeButton; // @synthesize unlikeButton=_unlikeButton;
@property(retain, nonatomic) UIButton *reportMenuView; // @synthesize reportMenuView=_reportMenuView;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) __weak id <ATCLanLanSubaruReportMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useDislike; // @synthesize useDislike=_useDislike;
- (void).cxx_destruct;
- (void)hideDislikeGuideView;
- (void)showDislikeGuideViewInView:(id)arg1;
- (void)handleSubaruDislikeWithRequest:(id)arg1 error:(id)arg2 contentId:(id)arg3 trackInfo:(id)arg4 actionType:(id)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailed:(CDUnknownBlockType)arg7;
- (void)submitSubaruDislikeWith:(id)arg1 trackInfo:(id)arg2 actionType:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailed:(CDUnknownBlockType)arg5;
- (void)handleSubaruReportActionhWithRequest:(id)arg1 error:(id)arg2 contentId:(id)arg3 actionType:(id)arg4 onSuccess:(CDUnknownBlockType)arg5 onFailed:(CDUnknownBlockType)arg6;
- (void)submitSubaruReportActionWith:(id)arg1 actionType:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4;
- (void)handleSubaruReportMenuWithRequest:(id)arg1 error:(id)arg2;
- (void)getSubaruReportMenu;
- (_Bool)isValidLogin;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showSubaruReportMenuActionSheetInView:(id)arg1 contentId:(id)arg2;
- (void)hiddenReportMenuViewWithAnimation:(_Bool)arg1;
- (void)hiddenReportMenuView;
- (void)handleHiddeReportMenuViewNotification:(id)arg1;
- (void)showSubaruReportMenuInView:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3;
- (void)showSubaruReportMenuInItemView:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3 showDislike:(_Bool)arg4;
- (void)showSubaruReportMenuInItemView:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3 showDislike:(_Bool)arg4 menuType:(int)arg5;
- (void)showSubaruReportMenuInItemView:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3;
- (void)showSubaruReportMenuInMiniDetailWindow:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3;
- (void)clickedMenuItemAtIndex:(unsigned long long)arg1;
- (void)clickReportMenuItem:(id)arg1;
- (void)userLoggedOut:(id)arg1;
- (void)userLoggedIn:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

