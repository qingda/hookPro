//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDLighthouseSiteProvider, NSArray, NSDictionary, UIPickerView;

@interface MDLighthouseSelectedSitePicker : UIView
{
    MDLighthouseSiteProvider *siteProvider;
    id <MDLighthouseSelectedSitePickerDelegate> _delegate;
    NSDictionary *_customSiteDcitionary;
    UIPickerView *_siteSelectedPicker;
    NSArray *_cityArray;
    long long _selectedFirstRow;
}

@property(nonatomic) long long selectedFirstRow; // @synthesize selectedFirstRow=_selectedFirstRow;
@property(retain, nonatomic) NSArray *cityArray; // @synthesize cityArray=_cityArray;
@property(retain, nonatomic) UIPickerView *siteSelectedPicker; // @synthesize siteSelectedPicker=_siteSelectedPicker;
@property(retain, nonatomic) NSDictionary *customSiteDcitionary; // @synthesize customSiteDcitionary=_customSiteDcitionary;
@property(nonatomic) id <MDLighthouseSelectedSitePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDLighthouseSiteProvider *siteProvider; // @synthesize siteProvider;
- (id)lighthouseProvinceSiteItem:(id)arg1;
- (id)lighthouseCitySiteItem:(id)arg1;
- (long long)secondRowWithCity:(id)arg1 firstRow:(long long)arg2;
- (long long)firstRowWithProvince:(id)arg1;
- (void)didTouchedMaskView:(id)arg1;
- (void)showPickerWithSelectedFirstRow:(long long)arg1 secondRow:(long long)arg2;
- (void)showPickerWithSelectedProvince:(id)arg1 city:(id)arg2;
- (void)useDefaultSiteItemNotifyDelegate;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
@property(nonatomic) _Bool useEmptyItem;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 customSite:(id)arg2;

@end

