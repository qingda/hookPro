//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HomePageChannelReusableView.h"

#import "HomePageChannelDisplayItem.h"
#import "HomePageChannelInteractiveItem.h"

@class HomePageChannelProductMarkView, HomePageChannelProductOutOfStockLabel, HomePageChannelProductTagView, JDImageView, NSString, UIButton, UILabel, UITapGestureRecognizer;

@interface HomePageChannelGridProductView : HomePageChannelReusableView <HomePageChannelDisplayItem, HomePageChannelInteractiveItem>
{
    JDImageView *_productImageView;
    HomePageChannelProductMarkView *_markView;
    HomePageChannelProductOutOfStockLabel *_outOfStockLabel;
    UILabel *_productNameLabel;
    UILabel *_opertingPhraseLabel;
    UILabel *_priceLabel;
    UILabel *_referencePriceLabel;
    HomePageChannelProductTagView *_tagView;
    UIButton *_addToCartButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (struct CGSize)calculateSizeWithData:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIButton *addToCartButton; // @synthesize addToCartButton=_addToCartButton;
@property(retain, nonatomic) HomePageChannelProductTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *referencePriceLabel; // @synthesize referencePriceLabel=_referencePriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *opertingPhraseLabel; // @synthesize opertingPhraseLabel=_opertingPhraseLabel;
@property(retain, nonatomic) UILabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(retain, nonatomic) HomePageChannelProductOutOfStockLabel *outOfStockLabel; // @synthesize outOfStockLabel=_outOfStockLabel;
@property(retain, nonatomic) HomePageChannelProductMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void).cxx_destruct;
- (void)handleActionBlock:(CDUnknownBlockType)arg1 withData:(id)arg2;
- (void)populateWithData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
