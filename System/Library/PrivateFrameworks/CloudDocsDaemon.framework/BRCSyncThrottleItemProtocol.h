/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BRCItemID, NSString;


@protocol BRCSyncThrottleItemProtocol
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * logicalName; 
@property (nonatomic,readonly) NSString * extension; 
@required
-(BRCItemID *)itemID;
-(NSString *)path;
-(NSString *)extension;
-(NSString *)logicalName;

@end

