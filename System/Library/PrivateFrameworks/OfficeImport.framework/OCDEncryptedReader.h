/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader {

	OCCDecryptor* mDecryptor;

}

@property (nonatomic,readonly) OCCDecryptor * decryptor; 
-(void)restartReaderToUseDecryptedDocument;
-(id)defaultPassphrase;
-(void)dealloc;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(OCCDecryptor *)decryptor;
-(void)useUnencryptedDocument;
@end
