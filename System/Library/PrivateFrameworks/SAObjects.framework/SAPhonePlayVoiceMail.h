/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (nonatomic,copy) NSURL * voiceMailId; 
+(id)playVoiceMail;
+(id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)_afui_usefulUserResultType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSURL *)voiceMailId;
-(void)setVoiceMailId:(NSURL *)arg1 ;
@end

