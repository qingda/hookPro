//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface WanderShopCommentDetailView : UIView
{
    NSString *text;
    id delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)didiLongPressed:(id)arg1;
- (void)attachTapHandler;

@end

