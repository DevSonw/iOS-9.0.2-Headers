/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {

	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,retain) DACoreDAVLogger * curLogger;              //@synthesize curLogger=_curLogger - In the implementation block
+(id)instance;
-(BOOL)enabled;
-(id)init;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(void)logString:(id)arg1 ;
-(void)finishSnippets;
-(void)logStringWithFormat:(id)arg1 ;
-(void)logData:(id)arg1 ;
@end
