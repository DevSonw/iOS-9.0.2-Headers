/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/SMSBBPlugin.bundle/SMSBBPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKAudioControllerDelegate <NSObject>
@optional
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
-(void)audioControllerDidPause:(id)arg1;
-(void)audioControllerDidStop:(id)arg1;
-(void)audioControllerPlayingDidChange:(id)arg1;

@end
