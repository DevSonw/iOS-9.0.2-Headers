/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioAudioClip : RadioTrack

@property (nonatomic,copy,readonly) NSURL * assetURL; 
@property (nonatomic,readonly) long long purchaseID; 
@property (getter=isSkipable,nonatomic,readonly) BOOL skipable; 
-(NSURL *)assetURL;
-(BOOL)isSkipable;
-(long long)purchaseID;
@end
