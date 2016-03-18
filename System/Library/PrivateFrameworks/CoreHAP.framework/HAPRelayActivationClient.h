/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPRelayActivationClientDelegate;
@interface HAPRelayActivationClient : NSObject {

	id<HAPRelayActivationClientDelegate> _delegate;

}

@property (__weak) id<HAPRelayActivationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<HAPRelayActivationClientDelegate>)arg1 ;
-(id<HAPRelayActivationClientDelegate>)delegate;
-(void)close;
-(void)open;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
@end
