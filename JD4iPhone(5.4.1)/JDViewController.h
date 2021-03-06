//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "JDViewDelegate.h"
#import "SHVPSWindowProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDButton, JDNavigationBar, JDPromptView, JDStatusView, NSArray, NSDate, NSDictionary, NSString, NoNetworkPromptView;

@interface JDViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, JDViewDelegate, SHVPSWindowProtocol>
{
    JDNavigationBar *navBar_;
    JDPromptView *promptView_;
    NoNetworkPromptView *networkPromptView_;
    JDStatusView *statusView_;
    NSDictionary *_pvParams;
    _Bool hideShadowView_;
    _Bool _shouldSlidePopViewController;
    _Bool hideNetworkPromptView;
    _Bool _active;
    _Bool _isCustomizedBackButton;
    _Bool _isNotPvReport;
    UIViewController *leftViewController_;
    UIViewController *rightViewController_;
    NSArray *leftViewControllers_;
    NSArray *rightViewControllers_;
    double viewPosition_;
    NSString *_classParam;
    NSDate *_accessTime;
    CDUnknownBlockType _popBlock;
}

@property(copy, nonatomic) CDUnknownBlockType popBlock; // @synthesize popBlock=_popBlock;
@property(readonly, nonatomic) NSDate *accessTime; // @synthesize accessTime=_accessTime;
@property(nonatomic) _Bool isNotPvReport; // @synthesize isNotPvReport=_isNotPvReport;
@property(nonatomic) _Bool isCustomizedBackButton; // @synthesize isCustomizedBackButton=_isCustomizedBackButton;
@property(copy, nonatomic) NSString *classParam; // @synthesize classParam=_classParam;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool hideNetworkPromptView; // @synthesize hideNetworkPromptView;
@property(retain, nonatomic) NSDictionary *_pvParams; // @synthesize _pvParams;
@property(retain, nonatomic) NoNetworkPromptView *networkPromptView; // @synthesize networkPromptView=networkPromptView_;
@property(nonatomic) _Bool shouldSlidePopViewController; // @synthesize shouldSlidePopViewController=_shouldSlidePopViewController;
@property(nonatomic) double viewPosition; // @synthesize viewPosition=viewPosition_;
@property(retain, nonatomic) NSArray *rightViewControllers; // @synthesize rightViewControllers=rightViewControllers_;
@property(retain, nonatomic) NSArray *leftViewControllers; // @synthesize leftViewControllers=leftViewControllers_;
@property(nonatomic) _Bool hideShadowView; // @synthesize hideShadowView=hideShadowView_;
@property(retain, nonatomic) UIViewController *rightViewController; // @synthesize rightViewController=rightViewController_;
@property(retain, nonatomic) UIViewController *leftViewController; // @synthesize leftViewController=leftViewController_;
- (void)viewControllerReloadData:(_Bool)arg1;
- (_Bool)canReloadData;
- (_Bool)canReuse;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)languageSupport:(id)arg1;
- (void)setBottomBarHidden:(_Bool)arg1;
- (void)showNetworkPrompt:(id)arg1;
- (void)willPopViewController;
- (void)willPushNewVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)destroySHVPSwindow;
- (_Bool)isContainSHVPRoom;
- (_Bool)hideSHVPSWindow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didPan:(id)arg1;
- (void)removePGRDidPan;
- (void)userSpecificSlidePopViewController;
- (void)updateNaviTextTile;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;
- (void)dealloc;
- (void)showStatusViewWithImageName:(id)arg1 title:(id)arg2 description:(id)arg3;
- (void)showStatusViewWithImageName:(id)arg1 title:(id)arg2;
- (void)hideStatusView;
- (void)setStatusViewBackGroundColor:(id)arg1;
- (id)statusView;
- (void)showNoDataWithImageName:(id)arg1 title:(id)arg2 description:(id)arg3;
- (void)showNoDataWithImageName:(id)arg1 title:(id)arg2;
- (void)setPromptViewTextColor:(id)arg1;
- (void)hideNoDataPrompt;
- (id)promptView;
- (void)resetSubViewFrame:(struct CGRect)arg1;
- (void)backButtonClicked;
- (void)afterRotate;
- (void)didPopLoadView;
- (void)reloadData;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)bringNoNetworkPromptViewFront;
- (void)removeCheckNetwork;
- (void)resetNetWorkFrame;
- (void)showCheckNetwork;
- (void)removeReloadView;
- (void)showReloadView;
- (void)showReloadView:(id)arg1 andTitle:(id)arg2 andDetailTitle:(id)arg3;
- (void)reconnect;
- (void)pvParams:(id)arg1;
- (void)recordPV;
- (void)updateCartBadgeValue;
- (void)updateBackItem;
- (void)updateNavigationItemWithHeadModel:(id)arg1 pageID:(id)arg2;
- (id)cartBarButton;
- (void)addCart:(id)arg1;
- (void)removeCartObserver;
- (void)addCartObserver;
- (void)backTopButtonPressed:(id)arg1;
- (void)hideBackTopButtonAnimation:(_Bool)arg1;
- (void)showBackTopButtonAnimation:(_Bool)arg1;
- (void)removeBackTopButton;
- (void)createBackTopButtonInView:(id)arg1 frame:(struct CGRect)arg2;
@property(retain, nonatomic) JDButton *backTopButton;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)bezierAnimation:(struct CGRect)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (void)dropAnimationWithImage:(id)arg1 fromView:(id)arg2 toView:(id)arg3 inView:(id)arg4;
- (void)cartButtonPressed:(id)arg1;
- (void)bounceAnimation3;
- (void)bounceAnimation2;
- (void)bounceAnimation1;
- (void)setCartBadgeText:(id)arg1 animation:(_Bool)arg2;
- (void)hideCartButtonAnimation:(_Bool)arg1;
- (void)showCartButtonAnimation:(_Bool)arg1;
- (void)removeCartButton;
- (void)setCartButtonFrame:(struct CGRect)arg1;
- (void)createCartButtonInView:(id)arg1 frame:(struct CGRect)arg2;
@property(retain, nonatomic) JDButton *cartButton;
@property(readonly, nonatomic) _Bool isDroping;
- (void)setIsDroping:(_Bool)arg1;
- (id)dropView;
- (void)setDropView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

