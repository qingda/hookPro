//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXASTextNode.h"

@class NSString;

@interface NXSoldNode : NXASTextNode
{
    NSString *_sold;	// 144 = 0x90
    NSString *_realSales;	// 152 = 0x98
    NSString *_text;	// 160 = 0xa0
}

+ (void)load;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *realSales; // @synthesize realSales=_realSales;
@property(retain, nonatomic) NSString *sold; // @synthesize sold=_sold;
- (void).cxx_destruct;
- (id)propConfigNode_realSales;
- (id)propConfigNode_sold;
- (struct CGSize)computeSizeWithConstraints:(struct CGSize)arg1;
- (void)fillCSSNode:(struct nx_css_node *)arg1;
- (id)nodeName;

@end

