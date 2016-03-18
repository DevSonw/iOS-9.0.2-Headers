/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSURL;

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * startPlaying; 
@property (nonatomic,copy) NSURL * stationUrl; 
+(id)createRadioStation;
+(id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)startPlaying;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSURL *)stationUrl;
-(void)setStationUrl:(NSURL *)arg1 ;
@end
