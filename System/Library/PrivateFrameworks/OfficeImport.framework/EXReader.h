/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCXReader.h>

@class NSString;

@interface EXReader : OCXReader {

	NSString* mTemporaryDirectory;

}

@property (nonatomic,retain) NSString * temporaryDirectory; 
-(void)dealloc;
-(id)read;
-(id)defaultPassphrase;
-(NSString *)temporaryDirectory;
-(void)setTemporaryDirectory:(NSString *)arg1 ;
@end
