/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSFileManager, NSObject;

@interface SSPersistentCache : NSObject {

	BOOL _safeKeys;
	NSString* _identifier;
	NSString* _cacheName;
	NSString* _path;
	NSFileManager* _fm;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)safeKeyForKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)clear;
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)removeDataForKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(BOOL)_isFileNotFound:(id)arg1 ;
-(void)setFilenameSafeKeys:(BOOL)arg1 ;
@end
