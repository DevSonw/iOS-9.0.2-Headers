/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLGoogleWebAuthRequest : NSObject
+(id)requestForURL:(id)arg1 ;
+(void)clearCookiesFromStorage:(id)arg1 ;
+(BOOL)urlPageWillContainAuthorizationCode:(id)arg1 ;
+(id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 ;
+(id)authCodeFromWebPageTitle:(id)arg1 ;
+(id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 ;
@end
