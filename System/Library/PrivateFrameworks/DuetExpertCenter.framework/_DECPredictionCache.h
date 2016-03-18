/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSObject;

@interface _DECPredictionCache : NSObject {

	NSMutableDictionary* _cache;
	NSString* _restorationPath;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)description;
-(void)_saveToDisk;
-(id)initWithRestorationPath:(id)arg1 ;
-(BOOL)isDiskBacked;
-(void)cachePredictions:(id)arg1 consumer:(unsigned long long)arg2 ;
-(void)clearCacheForCategory:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(id)predictionsForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(void)_loadFromDisk;
@end
