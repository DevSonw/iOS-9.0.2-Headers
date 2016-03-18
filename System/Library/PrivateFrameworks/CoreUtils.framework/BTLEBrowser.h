/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableDictionary, CBCentralManager, NSObject, NSString;

@interface BTLEBrowser : NSObject <CBCentralManagerDelegate> {

	NSMutableDictionary* _accessories;
	CBCentralManager* _centralManager;
	BTLEBrowserPrivate* _cfBrowser;
	NSObject*<OS_dispatch_source> _lostTimer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _started;
	LogCategory* _ucat;
	/*function pointer*/void* _eventHandler_f;
	void* _eventHandler_ctx;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_start;
-(void)_stop:(int)arg1 ;
-(id)initWithCFBrowser:(BTLEBrowserPrivate*)arg1 ;
-(void)_postEventType:(unsigned)arg1 accessory:(id)arg2 ;
-(void)_lostTimer;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
@end
