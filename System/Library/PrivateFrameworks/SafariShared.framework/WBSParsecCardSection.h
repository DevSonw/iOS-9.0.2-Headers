/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface WBSParsecCardSection : NSObject {

	NSString* _type;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * url;                       //@synthesize url=_url - In the implementation block
+(Class)_classForCardSectionType:(id)arg1 ;
+(id)_specializedCardSectionSchema;
+(id)cardSectionSchema;
+(id)cardSectionWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)type;
-(id)_initWithDictionary:(id)arg1 ;
@end

