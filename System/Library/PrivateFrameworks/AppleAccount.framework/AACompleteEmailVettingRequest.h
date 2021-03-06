/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAEmailVettingRequest.h>

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {

	NSString* _token;

}
+(Class)responseClass;
-(id)urlString;
-(id)initWithAccount:(id)arg1 token:(id)arg2 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 token:(id)arg3 ;
-(id)bodyDictionary;
@end

