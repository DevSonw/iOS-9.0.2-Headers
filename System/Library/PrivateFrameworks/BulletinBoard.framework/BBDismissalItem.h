/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BBDismissalItem : NSObject {

	unsigned long long _feeds;
	NSDate* _expiration;

}

@property (nonatomic,readonly) unsigned long long feeds;                //@synthesize feeds=_feeds - In the implementation block
@property (nonatomic,retain,readonly) NSDate * expiration;              //@synthesize expiration=_expiration - In the implementation block
-(NSDate *)expiration;
-(void)dealloc;
-(id)description;
-(unsigned long long)feeds;
-(id)initWithFeeds:(unsigned long long)arg1 ;
-(void)addFeeds:(unsigned long long)arg1 ;
-(BOOL)hasExpired;
@end
