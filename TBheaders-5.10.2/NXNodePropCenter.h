//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NXNodePropCenter : NSObject
{
    NSMutableDictionary *_propBlocks;	// 8 = 0x8
}

+ (id)shareCenter;
@property(retain, nonatomic) NSMutableDictionary *propBlocks; // @synthesize propBlocks=_propBlocks;
- (void).cxx_destruct;
- (CDUnknownBlockType)propBlockForNode:(id)arg1 name:(id)arg2 category:(long long)arg3;
- (id)init;

@end

