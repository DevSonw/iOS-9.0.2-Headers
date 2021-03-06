/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPAccessoryDelegate, OS_dispatch_queue;
@class HAPAccessoryServer, NSString, NSNumber, NSArray, NSObject;

@interface HAPAccessory : NSObject {

	BOOL _reachable;
	BOOL _primary;
	BOOL _supportsRelay;
	id<HAPAccessoryDelegate> _delegate;
	HAPAccessoryServer* _server;
	NSString* _identifier;
	NSNumber* _instanceID;
	NSString* _uniqueIdentifier;
	NSArray* _services;
	NSString* _serverIdentifier;
	long long _linkType;
	NSString* _name;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _serialNumber;
	NSString* _firmwareVersion;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (assign,nonatomic,__weak) id<HAPAccessoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) HAPAccessoryServer * server;                    //@synthesize server=_server - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                         //@synthesize primary=_primary - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                     //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) BOOL supportsRelay;                                    //@synthesize supportsRelay=_supportsRelay - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                   //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * category; 
@property (nonatomic,retain) NSArray * services;                                    //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) NSString * serverIdentifier;                             //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,readonly) long long linkType;                                  //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                        //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                 //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareVersion;                              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
+(id)serverIdentifierWithUniqueIdentifier:(id)arg1 ;
+(BOOL)isAccessoryPairedWithIdentifier:(id)arg1 ;
+(id)instanceIDForUniqueIdentifier:(id)arg1 ;
+(BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(void)setDelegate:(id<HAPAccessoryDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<HAPAccessoryDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)category;
-(void)invalidate;
-(NSString *)identifier;
-(HAPAccessoryServer *)server;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)model;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 ;
-(BOOL)validateCharacteristicValues:(id*)arg1 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(id)characteristicsOfType:(id)arg1 ;
-(BOOL)_updateAndValidateServices;
-(BOOL)_updateService:(id)arg1 ;
-(BOOL)_updateForAccessoryInformationService;
-(id)servicesOfType:(id)arg1 ;
-(id)characteristicOfType:(id)arg1 serviceType:(id)arg2 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(void)setServer:(HAPAccessoryServer *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSNumber *)instanceID;
-(BOOL)supportsRelay;
-(BOOL)isPrimary;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPaired;
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)_isReachable;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setReachable:(BOOL)arg1 ;
-(void)setSupportsRelay:(BOOL)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)isReachable;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
-(NSString *)serialNumber;
-(long long)linkType;
@end

