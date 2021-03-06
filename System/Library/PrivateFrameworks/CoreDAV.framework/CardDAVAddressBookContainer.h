/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer {

	NSString* _maxResourceSize;
	NSString* _maxImageSize;
	NSURL* _meCardURL;

}

@property (nonatomic,retain) NSString * maxResourceSize;              //@synthesize maxResourceSize=_maxResourceSize - In the implementation block
@property (nonatomic,retain) NSString * maxImageSize;                 //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (nonatomic,retain) NSURL * meCardURL;                       //@synthesize meCardURL=_meCardURL - In the implementation block
@property (nonatomic,readonly) BOOL isAddressBook; 
@property (nonatomic,readonly) BOOL isSharedAddressBook; 
@property (nonatomic,readonly) BOOL isSearchAddressBook; 
+(id)copyPropertyMappingsForParser;
-(void)dealloc;
-(id)description;
-(void)applyParsedProperties:(id)arg1 ;
-(NSString *)maxResourceSize;
-(void)setMaxResourceSize:(NSString *)arg1 ;
-(void)setMeCardURL:(NSURL *)arg1 ;
-(BOOL)isAddressBook;
-(BOOL)isSearchAddressBook;
-(BOOL)isSharedAddressBook;
-(NSURL *)meCardURL;
-(void)setMaxImageSize:(NSString *)arg1 ;
-(NSString *)maxImageSize;
@end

