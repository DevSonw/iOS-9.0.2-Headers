/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRCarKitService;
@class NSXPCConnection, NSMutableArray;

@interface CRPairedVehicleManager : NSObject {

	NSXPCConnection* _serviceConnection;
	id<CRCarKitService> _service;
	NSMutableArray* _outstandingSemaphores;

}

@property (nonatomic,retain) NSXPCConnection * serviceConnection;                 //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (nonatomic,retain) id<CRCarKitService> service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingSemaphores;              //@synthesize outstandingSemaphores=_outstandingSemaphores - In the implementation block
-(id)init;
-(id)vehicleNameForWiFiUUID:(id)arg1 ;
-(BOOL)removeVehicle:(id)arg1 ;
-(id)vehicleForBluetoothAddress:(id)arg1 ;
-(id)saveVehicle:(id)arg1 ;
-(void)setOutstandingSemaphores:(NSMutableArray *)arg1 ;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)_releaseAllServiceSemaphores;
-(NSMutableArray *)outstandingSemaphores;
-(id)_serviceSemaphore;
-(void)_blockOnServiceSemaphore:(id)arg1 ;
-(NSXPCConnection *)serviceConnection;
-(id<CRCarKitService>)service;
-(id)allVehicles;
-(void)setService:(id<CRCarKitService>)arg1 ;
-(id)pairedVehicles;
@end
