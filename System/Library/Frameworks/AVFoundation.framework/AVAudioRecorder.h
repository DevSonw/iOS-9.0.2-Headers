/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSURL, NSDictionary, NSArray;

@interface AVAudioRecorder : NSObject {

	void* _impl;

}

@property (getter=isRecording,readonly) BOOL recording; 
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * settings; 
@property (assign) id<AVAudioRecorderDelegate> delegate; 
@property (readonly) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
@property (assign,nonatomic) int processToTap; 
@property (assign,nonatomic) BOOL instantaneousMetering; 
-(AudioRecorderImpl*)impl;
-(void)finishedRecording;
-(BOOL)isMeteringEnabled;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(void)privCommonCleanup;
-(id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(BOOL)prepareToRecord;
-(BOOL)recordAtTime:(double)arg1 ;
-(BOOL)recordForDuration:(double)arg1 ;
-(BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2 ;
-(BOOL)deleteRecording;
-(void)endInterruptionWithFlags;
-(void)setProcessToTap:(int)arg1 ;
-(int)processToTap;
-(BOOL)instantaneousMetering;
-(void)setInstantaneousMetering:(BOOL)arg1 ;
-(void)beginInterruption;
-(void)endInterruption;
-(double)currentTime;
-(BOOL)record;
-(void)setDelegate:(id<AVAudioRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id<AVAudioRecorderDelegate>)delegate;
-(NSDictionary *)settings;
-(NSURL *)url;
-(void)stop;
-(void)pause;
-(id)baseInit;
-(BOOL)isRecording;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(double)deviceCurrentTime;
-(void)finalize;
@end

