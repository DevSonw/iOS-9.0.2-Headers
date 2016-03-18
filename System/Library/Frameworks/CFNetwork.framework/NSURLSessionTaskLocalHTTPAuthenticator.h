/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskHTTPAuthenticator.h>

@protocol NSURLSessionAppleIDContext;
@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator {

	id<NSURLSessionAppleIDContext> _externalAuthenticator;

}

@property (copy) id<NSURLSessionAppleIDContext> externalAuthenticator;              //@synthesize externalAuthenticator=_externalAuthenticator - In the implementation block
-(void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithSessionAuthenticator:(id)arg1 statusCodes:(id)arg2 ;
-(void)setExternalAuthenticator:(id<NSURLSessionAppleIDContext>)arg1 ;
-(id<NSURLSessionAppleIDContext>)externalAuthenticator;
-(void)dealloc;
@end
