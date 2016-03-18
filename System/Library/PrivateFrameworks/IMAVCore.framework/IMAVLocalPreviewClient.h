/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAVCore/IMSystemMonitorListener.h>

@class IMAVCamera;

@interface IMAVLocalPreviewClient : NSObject <IMSystemMonitorListener> {

	BOOL _supportsPreview;
	BOOL _wantsPreview;
	BOOL _wantsPausedPreview;
	BOOL _wantsUnpausedPreview;

}

@property (nonatomic,readonly) BOOL isPreviewRunning; 
@property (assign,nonatomic) BOOL supportsPreview;                    //@synthesize supportsPreview=_supportsPreview - In the implementation block
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) IMAVCamera * localCamera; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)stopPreview;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(unsigned)cameraOrientation;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(BOOL)isPreviewRunning;
-(void)didReceiveErrorFromCamera:(unsigned)arg1 error:(id)arg2 ;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveCommError;
-(void)cameraDidBecomeAvailable:(unsigned)arg1 ;
-(void)setLocalCamera:(IMAVCamera *)arg1 ;
-(IMAVCamera *)localCamera;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)_avDaemonConnected;
-(BOOL)_shouldPreviewBeRunning;
-(void)_updatePreviewState;
-(void)unpausePreview;
-(void)beginAnimationToPIP;
-(void)endAnimationToPIP;
-(void)beginAnimationToPreview;
-(void)endAnimationToPreview;
-(BOOL)supportsPreview;
-(void)setSupportsPreview:(BOOL)arg1 ;
-(void)setCameraType:(unsigned)arg1 ;
-(unsigned)cameraType;
-(void)startPreview;
-(void)pausePreview;
@end
