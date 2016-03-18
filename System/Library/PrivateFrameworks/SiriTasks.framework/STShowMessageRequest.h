/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest {

	STSiriMessage* _message;
	BOOL _showAsDraft;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)message;
-(id)createResponse;
-(BOOL)_makeAppFrontmost;
-(BOOL)showAsDraft;
-(id)_initWithMessage:(id)arg1 showAsDraft:(BOOL)arg2 ;
@end
