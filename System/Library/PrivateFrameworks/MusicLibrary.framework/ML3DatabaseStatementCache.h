/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {

	NSMutableDictionary* _statementsDictionary;
	ML3StatementCacheList* _nodeList;
	unsigned long long _cacheSize;

}

@property (nonatomic,readonly) unsigned long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
-(void)dealloc;
-(void)clearCache;
-(unsigned long long)cacheSize;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(id)cachedStatementForSQL:(id)arg1 ;
-(id)allStatements;
-(void)cacheStatement:(id)arg1 ;
@end
