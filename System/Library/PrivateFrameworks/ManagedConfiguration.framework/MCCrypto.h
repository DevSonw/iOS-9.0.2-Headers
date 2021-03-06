/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@interface MCCrypto : NSObject
+(SecCertificateRef)copyCertificateRefFromPEMData:(id)arg1 ;
+(id)_decryptionFailedError;
+(void)createNewActivationLockBypassCodeOutCode:(char*)arg1 outRawBytes:(char*)arg2 outHash:(char*)arg3 ;
+(id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2 ;
+(SecCertificateRef)copyCertificateRefFromPKCS1Data:(id)arg1 ;
+(BOOL)isValidPKCS12Data:(id)arg1 ;
+(id)objectFromEncryptedData:(id)arg1 outCertificate:(_SecCertificate*)arg2 outError:(id*)arg3 ;
+(id)createAndStoreNewActivationLockBypassCodeAndHash;
+(id)storedActivationLockBypassCode;
+(void)clearStoredActivationLockBypassCode;
+(void)clearStoredActivationLockHash;
+(id)storedActivationLockBypassCodeHash;
@end

