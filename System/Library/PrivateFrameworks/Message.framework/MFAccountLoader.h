/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFAccountLoader : NSObject
+(id)accountWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2 ;
+(Class)accountClassForPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(id)_accountClassStringWithPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(Class)_accountClassForString:(id)arg1 error:(id*)arg2 ;
+(BOOL)loadBundleForAccountClassString:(id)arg1 error:(id*)arg2 ;
+(id)_bundlePathForAccountClassString:(id)arg1 ;
+(id)accountWithPersistentAccount:(id)arg1 error:(id*)arg2 ;
@end
