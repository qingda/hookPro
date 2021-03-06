//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TangramItemModelProtocol <NSObject>
- (NSString *)display;
- (double)marginLeft;
- (double)marginBottom;
- (double)marginRight;
- (double)marginTop;
- (NSString *)reuseIdentifier;
- (struct NSString *)itemType;
- (void)setItemFrame:(struct CGRect)arg1;
- (struct CGRect)itemFrame;

@optional
- (unsigned long long)colspan;
- (NSString *)position;
@end

