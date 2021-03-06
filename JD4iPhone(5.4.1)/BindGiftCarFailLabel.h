//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTAttributedLabel.h"

#import "TTTAttributedLabelDelegate.h"

@class NSString;

@interface BindGiftCarFailLabel : TTTAttributedLabel <TTTAttributedLabelDelegate>
{
    id <BindGiftCarLabelPhoneNumClickDelegate> _bindFailDelegate;
}

@property(nonatomic) __weak id <BindGiftCarLabelPhoneNumClickDelegate> bindFailDelegate; // @synthesize bindFailDelegate=_bindFailDelegate;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

