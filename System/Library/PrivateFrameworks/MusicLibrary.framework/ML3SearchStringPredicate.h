/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate {

	NSArray* _properties;
	NSString* _searchString;

}

@property (nonatomic,copy) NSArray * properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
+(id)predicateWithConcatenatedProperties:(id)arg1 searchString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)searchString;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)initWithConcatenatedProperties:(id)arg1 searchString:(id)arg2 ;
@end
