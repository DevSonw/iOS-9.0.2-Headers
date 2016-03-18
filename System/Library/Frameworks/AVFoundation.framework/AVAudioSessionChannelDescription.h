/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * channelName; 
@property (readonly) NSString * owningPortUID; 
@property (readonly) unsigned long long channelNumber; 
@property (readonly) unsigned channelLabel; 
+(id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned)arg3 ;
+(id)privateCreateArray:(id)arg1 portUID:(id)arg2 ;
-(ChannelDescriptionImpl*)privateGetImplementation;
-(NSString *)owningPortUID;
-(unsigned long long)channelNumber;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(NSString *)channelName;
-(unsigned)channelLabel;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
