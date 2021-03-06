/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPAccessory, NSString, NSNumber;

@interface HMDAccessoryTransportInformation : NSObject <NSSecureCoding> {

	BOOL _reachable;
	HAPAccessory* _hapAccessory;
	NSString* _serverIdentifier;
	NSNumber* _instanceID;
	long long _linkType;

}

@property (nonatomic,retain) HAPAccessory * hapAccessory;              //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (nonatomic,retain) NSString * serverIdentifier;              //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * instanceID;                    //@synthesize instanceID=_instanceID - In the implementation block
@property (assign) long long linkType;                                 //@synthesize linkType=_linkType - In the implementation block
@property (assign) BOOL reachable;                                     //@synthesize reachable=_reachable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)instanceID;
-(NSString *)serverIdentifier;
-(id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(long long)arg3 reachable:(BOOL)arg4 ;
-(BOOL)reachable;
-(id)initWithHAPAccessory:(id)arg1 ;
-(HAPAccessory *)hapAccessory;
-(void)setHapAccessory:(HAPAccessory *)arg1 ;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
@end

