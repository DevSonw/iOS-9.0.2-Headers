/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSAutoreleasePool : NSObject {

	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;

}
+(void)showPools;
+(void)releaseAllPools;
+(unsigned long long)autoreleasedObjectCount;
+(unsigned long long)topAutoreleasePoolCount;
+(BOOL)autoreleasePoolExists;
+(void)enableRelease:(BOOL)arg1 ;
+(void)enableFreedObjectCheck:(BOOL)arg1 ;
+(unsigned long long)poolCountHighWaterMark;
+(void)setPoolCountHighWaterMark:(unsigned long long)arg1 ;
+(unsigned long long)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned long long)arg1 ;
+(unsigned long long)totalAutoreleasedObjects;
+(void)resetTotalAutoreleasedObjects;
+(void)addObject:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)drain;
@end

