/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEKeychainItem.h>

@interface NEIdentityKeychainItem : NEKeychainItem
+(id)copyIdentities:(id)arg1 fromDomain:(long long)arg2 ;
+(id)importPKCS12Data:(id)arg1 passphrase:(id)arg2 ;
+(id)copyPersistentReferenceForIdentity:(SecIdentityRef)arg1 ;
+(id)copyPropertiesForIdentity:(SecIdentityRef)arg1 persistentReference:(id)arg2 ;
-(void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4 ;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)copyPassword;
-(id)copyQueryWithReturnTypes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)sync;
@end

