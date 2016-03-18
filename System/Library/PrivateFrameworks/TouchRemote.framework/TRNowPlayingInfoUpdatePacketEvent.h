/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSDictionary;

@interface TRNowPlayingInfoUpdatePacketEvent : TRPacketEvent {

	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * nowPlayingInfo;              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
+(unsigned)_packetEventType;
-(NSDictionary *)nowPlayingInfo;
-(id)description;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithNowPlayingInfo:(id)arg1 ;
@end
