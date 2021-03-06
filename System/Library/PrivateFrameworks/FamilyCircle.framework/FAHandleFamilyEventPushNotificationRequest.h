/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest {

	NSDictionary* _payload;

}

@property (readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(NSDictionary *)payload;
-(id)initWithPayload:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

