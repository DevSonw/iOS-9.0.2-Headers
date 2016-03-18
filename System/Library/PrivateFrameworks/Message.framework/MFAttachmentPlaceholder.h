/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {

	NSMutableDictionary* _jsonDictionary;

}
+(id)placeholderForFileURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
+(BOOL)hasPlaceholderRepresentation:(id)arg1 ;
+(id)placeholderRepresentations:(id)arg1 ;
+(void)removePlaceholder:(id)arg1 ;
+(void)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
+(void)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
+(void)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 withHandler:(/*^block*/id)arg4 ;
+(id)placeholderFromSerializedRepresentation:(id)arg1 ;
+(BOOL)writeData:(id)arg1 forURL:(id)arg2 ;
+(id)dataForPlaceholder:(id)arg1 ;
+(id)placeholder;
+(void)removePlaceholderForContentID:(id)arg1 ;
+(BOOL)isPlaceholderSerializedRepresentation:(id)arg1 ;
+(id)placeholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)placeholderDirectory;
+(id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2 ;
+(id)_placeholderMagic;
+(id)_localStoreURLForFileURL:(id)arg1 contentID:(id)arg2 ;
+(void)removePlaceholderForFileURL:(id)arg1 ;
+(id)placeholderForMediaURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
-(id)serializedRepresentation;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(void)setUseMailDrop:(BOOL)arg1 ;
-(BOOL)useMailDrop;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)mimeType;
-(id)fileURL;
-(void)setMimeType:(id)arg1 ;
-(id)fileURLString;
-(void)_setJSONDictionary:(id)arg1 ;
-(void)setFileURLString:(id)arg1 ;
-(id)fileName;
-(void)setFileName:(id)arg1 ;
-(unsigned long long)fileSize;
-(void)setFileSize:(unsigned long long)arg1 ;
@end
