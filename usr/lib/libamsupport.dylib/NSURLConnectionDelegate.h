/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libamsupport.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;

@end

