//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableArray, UILabel, UIView;

@interface JIMIBaseVC : UIViewController
{
    UIView *_navigationView;
    NSMutableArray *_networks;
    UILabel *_titleLable;
}

@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) NSMutableArray *networks; // @synthesize networks=_networks;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
- (void).cxx_destruct;
- (void)endLoading;
- (void)startLoading;
- (void)didReceiveMemoryWarning;
- (void)onBack:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)isShowNetworkAlertView;
- (void)addNetWork:(id)arg1;
- (void)removeNetWork:(id)arg1;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

