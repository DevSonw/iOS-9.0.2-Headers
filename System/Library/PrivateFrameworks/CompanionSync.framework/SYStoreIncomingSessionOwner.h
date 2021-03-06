/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYStoreSessionOwner.h>

@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner
-(void)syncSession:(id)arg1 applyChanges:(NSArray*)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithIncomingSession:(id)arg1 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(BOOL)isResetSync;
@end

