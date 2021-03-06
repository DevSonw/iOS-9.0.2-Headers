/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSString, NSObject;

@interface CAMBufferNotificationObservanceChange : CAMBufferObservanceChange {

	NSString* _notification;
	NSObject* _object;

}

@property (nonatomic,copy,readonly) NSString * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                  //@synthesize object=_object - In the implementation block
-(NSString *)notification;
-(NSObject *)object;
-(id)initWithNotification:(id)arg1 object:(id)arg2 ;
@end

