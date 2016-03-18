/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand {

	NSArray* _preferredIntervals;

}

@property (nonatomic,copy) NSArray * preferredIntervals;              //@synthesize preferredIntervals=_preferredIntervals - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreferredIntervals:(NSArray *)arg1 ;
-(NSArray *)preferredIntervals;
@end
