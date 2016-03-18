/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NACRoutingController.h>

@protocol NACRoutingControllerDelegate;
@class NACXPCClient, NSString, NSArray, NACAudioRoute;

@interface NACRoutingControllerProxy : NSObject <NACRoutingController> {

	NACXPCClient* _xpcClient;
	NSString* _category;
	BOOL _isObserving;
	id<NACRoutingControllerDelegate> _delegate;
	NSArray* _availableAudioRoutes;
	NACAudioRoute* _pickedRoute;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NACAudioRoute * pickedRoute;                                 //@synthesize pickedRoute=_pickedRoute - In the implementation block
@property (nonatomic,readonly) NSArray * availableAudioRoutes;                              //@synthesize availableAudioRoutes=_availableAudioRoutes - In the implementation block
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NACAudioRoute *)pickedRoute;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<NACRoutingControllerDelegate>)delegate;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
-(void)_audioRoutesDidChange;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
@end
