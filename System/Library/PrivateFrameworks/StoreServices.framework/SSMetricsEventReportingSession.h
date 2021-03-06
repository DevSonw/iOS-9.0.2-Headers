/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray, NSMutableArray, SSMetricsEventController;

@interface SSMetricsEventReportingSession : NSObject {

	long long _insertTimestamp;
	NSURL* _reportingURL;
	NSArray* _unreportedEvents;
	NSMutableArray* _unreportedEventPIDs;
	SSMetricsEventController* _eventController;

}
-(void)dealloc;
-(id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3 ;
-(id)_unreportedEvents;
-(void)_writeString:(id)arg1 toData:(id)arg2 ;
-(BOOL)anyUnreportedEvents;
-(BOOL)markEventsAsReported;
-(void)writeEventsToStream:(id)arg1 ;
@end

