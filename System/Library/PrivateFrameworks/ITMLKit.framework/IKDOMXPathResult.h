/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMXPathResult.h>

@class NSString, IKDOMNode, NSArray;

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {

	long long _type;
	NSArray* _nodes;

}

@property (assign) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                                     //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) long long resultType; 
@property (nonatomic,readonly) long long numberValue; 
@property (nonatomic,__weak,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL booleanValue; 
@property (nonatomic,__weak,readonly) IKDOMNode * singleNodeValue; 
@property (nonatomic,readonly) BOOL invalidIteratorState; 
@property (nonatomic,readonly) long long snapshotLength; 
-(void)setNodes:(NSArray *)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)stringValue;
-(BOOL)booleanValue;
-(id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3 ;
-(NSArray *)nodes;
-(long long)numberValue;
-(long long)resultType;
-(IKDOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(long long)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(long long)arg1 ;
@end
