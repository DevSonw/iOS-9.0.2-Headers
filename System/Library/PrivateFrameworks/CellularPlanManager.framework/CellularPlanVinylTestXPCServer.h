/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol CellularPlanVinylTest;
@class NSXPCListener, NSMutableArray, NSString;

@interface CellularPlanVinylTestXPCServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* fXpcListener;
	NSMutableArray* fXpcConnections;
	id<CellularPlanVinylTest> fDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 andDelegate:(id)arg2 ;
@end
