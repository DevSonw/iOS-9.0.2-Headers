/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/TTVersionedDocument.h>

@class ICDrawing;

@interface ICDrawingVersionedDocument : TTVersionedDocument {

	ICDrawing* _drawing;

}

@property (nonatomic,retain) ICDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(ICDrawing *)drawing;
-(void)setDrawing:(ICDrawing *)arg1 ;
-(unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
@end
