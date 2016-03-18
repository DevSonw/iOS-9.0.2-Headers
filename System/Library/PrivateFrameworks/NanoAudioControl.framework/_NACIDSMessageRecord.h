/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable, NSString;

@interface _NACIDSMessageRecord : NSObject {

	PBCodable* _message;
	long long _type;
	double _timeout;
	NSString* _queueOne;

}

@property (nonatomic,retain) PBCodable * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double timeout;                   //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * queueOne;                //@synthesize queueOne=_queueOne - In the implementation block
-(double)timeout;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(PBCodable *)message;
-(void)setMessage:(PBCodable *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSString *)queueOne;
-(void)setQueueOne:(NSString *)arg1 ;
@end
