/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSUpdatesDatabaseSchema : NSObject
+(id)databasePath;
+(void)createSchemaInDatabase:(id)arg1 withName:(id)arg2 ;
+(BOOL)databaseRequiresMigration:(id)arg1 ;
+(void)_migrate7000to7001InDatabase:(id)arg1 ;
@end

