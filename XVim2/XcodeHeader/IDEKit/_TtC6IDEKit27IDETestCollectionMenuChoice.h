//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;
@protocol IDETestCollection;

@interface _TtC6IDEKit27IDETestCollectionMenuChoice : NSObject
{
    MISSING_TYPE *title;
    MISSING_TYPE *testCollection;
    MISSING_TYPE *configurations;
    MISSING_TYPE *setEnabledValue;
    MISSING_TYPE *modifierKeys;
    MISSING_TYPE *imageName;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) BOOL setEnabledValue;
@property(nonatomic, readonly) NSArray *configurations;
@property(nonatomic, readonly) id <IDETestCollection> testCollection; // @synthesize testCollection;

@end
