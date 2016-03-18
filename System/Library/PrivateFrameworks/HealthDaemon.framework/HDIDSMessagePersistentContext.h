/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate;

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {

	BOOL _fromRequest;
	unsigned short _messageID;
	NSString* _idsIdentifier;
	NSDictionary* _userInfo;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned short messageID;                           //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                             //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,getter=isFromRequest,nonatomic) BOOL fromRequest;              //@synthesize fromRequest=_fromRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDate *)date;
-(NSDictionary *)userInfo;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned short)messageID;
-(NSString *)idsIdentifier;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setFromRequest:(BOOL)arg1 ;
-(BOOL)isFromRequest;
@end
