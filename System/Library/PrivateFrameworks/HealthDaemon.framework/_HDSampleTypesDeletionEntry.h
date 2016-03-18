/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSNumber, NSSet;

@interface _HDSampleTypesDeletionEntry : HDJournalEntry {

	NSNumber* _sourceID;
	NSSet* _types;

}

@property (nonatomic,copy) NSNumber * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,retain) NSSet * types;                  //@synthesize types=_types - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)behavior;
+(void)applyEntries:(id)arg1 withDaemon:(id)arg2 ;
-(NSNumber *)sourceID;
-(void)setSourceID:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)types;
-(id)initWithSourceID:(id)arg1 types:(id)arg2 ;
-(void)setTypes:(NSSet *)arg1 ;
@end
