//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DAContextMenuCell;

@protocol MDMenuCellFactoryDelegate <NSObject>
- (void)menuCellDidSelectDeleteOption:(DAContextMenuCell *)arg1;
- (void)menuCellDidSelectMoreOption:(DAContextMenuCell *)arg1;

@optional
- (void)menuCellDidSelectVipOption:(DAContextMenuCell *)arg1;
@end

