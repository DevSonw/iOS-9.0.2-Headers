/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSKeyedArchiver, NSString;

@interface HMDKeyedRemoteArchiver : NSObject {

	NSKeyedArchiver* _archiver;
	NSString* _transportType;

}

@property (nonatomic,retain) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
@property (nonatomic,retain) NSString * transportType;                //@synthesize transportType=_transportType - In the implementation block
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)finishEncoding;
-(void)setTransportType:(NSString *)arg1 ;
-(NSString *)transportType;
-(id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(BOOL)arg2 remoteGateway:(BOOL)arg3 ;
-(id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(BOOL)arg2 ;
-(void)setArchiver:(NSKeyedArchiver *)arg1 ;
-(NSKeyedArchiver *)archiver;
@end
