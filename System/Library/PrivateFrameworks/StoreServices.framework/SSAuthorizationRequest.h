/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	NSString* _keybagPath;
	id _token;
	NSString* _reason;

}

@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) id authorizationToken; 
@property (copy) NSString * keybagPath;                                                //@synthesize keybagPath=_keybagPath - In the implementation block
@property (copy) NSString * reason;                                                    //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) id<SSAuthorizationRequestDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2 ;
-(void)setKeybagPath:(NSString *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(NSString *)reason;
-(NSNumber *)accountIdentifier;
-(void)startWithAuthorizationResponseBlock:(/*^block*/id)arg1 ;
-(id)authorizationToken;
-(NSString *)keybagPath;
@end
