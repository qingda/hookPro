//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class UIImageView, WanderShopMessageCenterButton, WanderShopMessageCenterButtonBackView, WanderShopMessageViewController, WanderShopNotificationViewController;

@interface WanderShopMessageCenterViewController : JDViewController
{
    WanderShopMessageCenterButton *messageButton;
    WanderShopMessageCenterButton *notificationButton;
    WanderShopMessageViewController *messageController;
    WanderShopNotificationViewController *notificationController;
    WanderShopMessageCenterButtonBackView *buttonBackView;
    UIImageView *newMessageView;
    int showMessageType;
}

@property(nonatomic) int showMessageType; // @synthesize showMessageType;
- (void).cxx_destruct;
- (void)buttonSelect:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

