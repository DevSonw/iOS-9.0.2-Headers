/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest : CKDURLRequest {

	NSData* _token;
	NSString* _bundleID;
	NSString* _apsEnvironmentString;

}

@property (nonatomic,retain) NSData * token;                               //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
-(NSString *)bundleID;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
-(NSString *)apsEnvironmentString;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(id)flowControlKey;
-(BOOL)requiresTokenRegistration;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithToken:(id)arg1 bundleID:(id)arg2 ;
-(void)setBundleID:(NSString *)arg1 ;
-(int)operationType;
@end
