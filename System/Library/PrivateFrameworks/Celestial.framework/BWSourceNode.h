/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWSourceNodeErrorDelegate;
@interface BWSourceNode : BWNode {

	id<BWSourceNodeErrorDelegate> _errorDelegate;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (assign,nonatomic) id<BWSourceNodeErrorDelegate> errorDelegate;              //@synthesize errorDelegate=_errorDelegate - In the implementation block
-(OpaqueCMClockRef)clock;
-(id)nodeType;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(void)setErrorDelegate:(id<BWSourceNodeErrorDelegate>)arg1 ;
-(id<BWSourceNodeErrorDelegate>)errorDelegate;
@end

