/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumberFormatter;

@interface IKFormatting : NSObject {

	NSMutableDictionary* _dateFormatters;
	NSMutableDictionary* _numberFormatters;
	NSNumberFormatter* _durationFormatter;
	NSNumberFormatter* _durationPaddedFormatter;

}
+(id)sharedInstance;
+(id)isoDateFormatter;
+(id)rfc1123DateFormatter;
-(id)init;
-(id)formatDate:(id)arg1 format:(id)arg2 ;
-(id)formatDuration:(id)arg1 ;
-(id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 ;
@end
