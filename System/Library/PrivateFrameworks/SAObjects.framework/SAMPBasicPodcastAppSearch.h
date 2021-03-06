/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (assign,nonatomic) BOOL acceptPodcastCollections; 
@property (assign,nonatomic) BOOL acceptPodcastStations; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSString * query; 
+(id)basicPodcastAppSearch;
+(id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(void)setMaxResults:(long long)arg1 ;
-(long long)maxResults;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)acceptPodcastCollections;
-(void)setAcceptPodcastCollections:(BOOL)arg1 ;
-(BOOL)acceptPodcastStations;
-(void)setAcceptPodcastStations:(BOOL)arg1 ;
@end

