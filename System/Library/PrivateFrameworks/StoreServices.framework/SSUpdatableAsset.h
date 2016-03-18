/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface SSUpdatableAsset : NSObject {

	NSURL* _cacheURL;
	NSString* _md5;
	NSString* _name;
	NSURL* _serverURL;
	NSString* _version;

}

@property (nonatomic,retain) NSURL * cacheURL;               //@synthesize cacheURL=_cacheURL - In the implementation block
@property (nonatomic,copy) NSString * md5;                   //@synthesize md5=_md5 - In the implementation block
@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;              //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * version;               //@synthesize version=_version - In the implementation block
-(NSString *)name;
-(NSString *)version;
-(void)_setName:(id)arg1 ;
-(NSURL *)cacheURL;
-(void)_setCacheURL:(id)arg1 ;
-(NSURL *)serverURL;
-(void)_setServerURL:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
-(NSString *)md5;
-(void)_setMD5:(id)arg1 ;
@end
