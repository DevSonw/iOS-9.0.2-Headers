/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSImpression.h>
@class NSString, NSArray;


@protocol IKJSImpression <JSExport>
@property (nonatomic,readonly) NSString * data; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) id parent; 
@property (nonatomic,readonly) long long index; 
@required
-(NSString *)data;
-(long long)index;
-(NSArray *)timestamps;
-(id)parent;
-(NSArray *)children;

@end

#import <libobjc.A.dylib/JSExport.h>

@class NSString, NSArray, NSMutableArray;

@interface IKJSImpression : IKJSObject <IKJSImpression, JSExport> {

	IKJSImpression* _parentImpression;
	NSString* _metricsData;
	NSMutableArray* _mutableTimestamps;
	NSMutableArray* _mutableChildren;
	long long _indexInParent;

}

@property (assign,nonatomic,__weak) IKJSImpression * parentImpression;              //@synthesize parentImpression=_parentImpression - In the implementation block
@property (nonatomic,copy) NSString * metricsData;                                  //@synthesize metricsData=_metricsData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTimestamps;                    //@synthesize mutableTimestamps=_mutableTimestamps - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChildren;                      //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (assign,nonatomic) long long indexInParent;                               //@synthesize indexInParent=_indexInParent - In the implementation block
@property (nonatomic,readonly) NSString * data; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) id parent; 
@property (nonatomic,readonly) long long index; 
-(id)description;
-(NSString *)data;
-(long long)index;
-(void)linkReferences;
-(id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned long long)arg3 ;
-(void)addTimestamp:(long long)arg1 ;
-(IKJSImpression *)parentImpression;
-(NSMutableArray *)mutableTimestamps;
-(NSMutableArray *)mutableChildren;
-(NSString *)metricsData;
-(long long)indexInParent;
-(void)setMutableTimestamps:(NSMutableArray *)arg1 ;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
-(void)setParentImpression:(IKJSImpression *)arg1 ;
-(void)setMetricsData:(NSString *)arg1 ;
-(void)setIndexInParent:(long long)arg1 ;
-(NSArray *)timestamps;
-(void)addChild:(id)arg1 ;
-(id)parent;
-(NSArray *)children;
@end
