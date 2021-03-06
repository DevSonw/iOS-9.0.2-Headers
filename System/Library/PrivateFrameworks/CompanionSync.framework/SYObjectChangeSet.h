/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface SYObjectChangeSet : NSObject {

	NSMutableSet* _added;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;

}

@property (nonatomic,copy) NSMutableSet * added;                //@synthesize added=_added - In the implementation block
@property (nonatomic,copy) NSMutableSet * updated;              //@synthesize updated=_updated - In the implementation block
@property (nonatomic,copy) NSMutableSet * deleted;              //@synthesize deleted=_deleted - In the implementation block
-(id)init;
-(NSMutableSet *)updated;
-(NSMutableSet *)added;
-(id)changesBetween:(id)arg1 and:(id)arg2 ;
-(id)initWithChangesBetween:(id)arg1 and:(id)arg2 ;
-(void)applyToStore:(id)arg1 ;
-(void)setAdded:(NSMutableSet *)arg1 ;
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(NSMutableSet *)deleted;
-(void)setDeleted:(NSMutableSet *)arg1 ;
@end

