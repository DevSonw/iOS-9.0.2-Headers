/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaQueryQueueFeeder.h>

@class MPMediaPlaylist;

@interface MusicQueryQueueFeeder : MPMediaQueryQueueFeeder

@property (nonatomic,retain) MPMediaPlaylist * mixPlaylist; 
+(BOOL)supportsStateRestoration;
+(Class)playbackItemMetadataClass;
-(void)setMixPlaylist:(MPMediaPlaylist *)arg1 ;
-(MPMediaPlaylist *)mixPlaylist;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(Class)itemClass;
-(id)errorResolverForItem:(id)arg1 ;
-(unsigned long long)realRepeatType;
-(unsigned long long)realShuffleType;
@end

