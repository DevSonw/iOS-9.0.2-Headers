/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {

	OCCancel* mCancel;
	OITSUTemporaryDirectory* mTemporaryDirectoryObject;

}
+(id)mapperForCurrentThread;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isCancelled;
-(void)setup;
-(void)teardown;
-(void)quit;
-(id)temporaryDirectoryPath;
@end

