/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CoreDAVResponseBodyParser <NSObject>
@property (readonly) NSError * parserError; 
@optional
+(BOOL)canHandleContentType:(id)arg1;

@required
-(NSError *)parserError;
-(BOOL)processData:(id)arg1 forTask:(id)arg2;

@end
