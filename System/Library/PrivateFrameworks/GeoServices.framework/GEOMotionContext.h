/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMotionContextProviderDelegate.h>

@protocol GEOMotionContextProvider;
@class NSString;

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate> {

	id<GEOMotionContextProvider> _provider;
	unsigned long long _motionType;
	unsigned long long _exitType;
	unsigned long long _confidence;

}

@property (nonatomic,readonly) unsigned long long motionType;              //@synthesize motionType=_motionType - In the implementation block
@property (nonatomic,readonly) unsigned long long exitType;                //@synthesize exitType=_exitType - In the implementation block
@property (nonatomic,readonly) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL isMoving; 
@property (nonatomic,readonly) BOOL isWalking; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) BOOL isDriving; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(BOOL)isRunning;
-(BOOL)isDriving;
-(void)startMotionUpdatesWithProvider:(id)arg1 ;
-(BOOL)isMoving;
-(BOOL)isWalking;
-(void)stopMotionUpdates;
-(void)motionContextProvider:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4 ;
-(unsigned long long)confidence;
-(unsigned long long)exitType;
-(unsigned long long)motionType;
@end
