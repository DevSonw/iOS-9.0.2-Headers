/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardLineSerialization <NSObject>
@required
-(void)serializeData:(id)arg1;
-(void)serializeString:(id)arg1;
-(id)insertionMarker;
-(unsigned long long)estimatedDataLength;
-(void)insertLine:(id)arg1 atMarker:(id)arg2;
-(BOOL)canSerializeString:(id)arg1;
-(BOOL)canSerializeArray:(id)arg1;
-(BOOL)canSerializeData:(id)arg1;
-(void)serializeLine:(id)arg1;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
-(void)serializeOpaqueValue:(id)arg1;
-(void)serializeVersionPlaceholder;

@end

