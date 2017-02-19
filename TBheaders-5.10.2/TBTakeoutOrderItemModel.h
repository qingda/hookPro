//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutOrderItemModel : TBJSONModel
{
    NSString *_itemId;	// 8 = 0x8
    NSString *_itemTitle;	// 16 = 0x10
    NSString *_itemLogo;	// 24 = 0x18
    NSString *_skuId;	// 32 = 0x20
    NSString *_sku;	// 40 = 0x28
    NSString *_originalPrice;	// 48 = 0x30
    NSString *_discountPrice;	// 56 = 0x38
    NSString *_quantity;	// 64 = 0x40
}

@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(copy, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *itemLogo; // @synthesize itemLogo=_itemLogo;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end
