/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMEvent : DOMObject

@property (copy,readonly) NSString * type; 
@property (readonly) id<DOMEventTarget> target; 
@property (readonly) id<DOMEventTarget> currentTarget; 
@property (readonly) unsigned short eventPhase; 
@property (readonly) BOOL bubbles; 
@property (readonly) BOOL cancelable; 
@property (readonly) unsigned long long timeStamp; 
@property (readonly) id<DOMEventTarget> srcElement; 
@property (assign) BOOL returnValue; 
@property (assign) BOOL cancelBubble; 
-(void)dealloc;
-(NSString *)type;
-(id<DOMEventTarget>)target;
-(void)setReturnValue:(BOOL)arg1 ;
-(unsigned long long)timeStamp;
-(BOOL)bubbles;
-(void)finalize;
-(id<DOMEventTarget>)currentTarget;
-(unsigned short)eventPhase;
-(BOOL)cancelable;
-(BOOL)defaultPrevented;
-(id<DOMEventTarget>)srcElement;
-(BOOL)returnValue;
-(BOOL)cancelBubble;
-(void)setCancelBubble:(BOOL)arg1 ;
-(void)stopPropagation;
-(void)preventDefault;
-(void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3 ;
-(void)initEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 ;
-(void)stopImmediatePropagation;
@end

