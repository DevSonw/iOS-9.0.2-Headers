/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSOrderedSet;

@interface FBOcclusionsStackEntry : NSObject {

	NSString* _key;
	double _level;
	NSSet* _occlusions;
	NSOrderedSet* _orderedOcclusions;

}

@property (nonatomic,copy,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double level;                                         //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSSet * occlusions; 
@property (nonatomic,copy,readonly) NSOrderedSet * orderedOcclusions;              //@synthesize orderedOcclusions=_orderedOcclusions - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(void)setLevel:(double)arg1 ;
-(double)level;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSSet *)occlusions;
-(void)setOcclusions:(NSSet *)arg1 ;
-(NSOrderedSet *)orderedOcclusions;
-(id)initWithKey:(id)arg1 ;
@end
