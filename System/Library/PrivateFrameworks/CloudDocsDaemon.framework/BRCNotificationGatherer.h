/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCNotificationPipe;

@interface BRCNotificationGatherer : NSObject {

	BRCNotificationPipe* _pipe;
	/*^block*/id _gatherReply;

}
-(id)init;
-(void)invalidate;
-(void)done;
-(id)initWithNotificationPipe:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)continueGatheringWithBatchSize:(long long)arg1 ;
@end
