/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACEUVolumeLimitMessage : PBCodable <NSCopying> {

	NSString* _category;
	float _eUVolumeLimit;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasEUVolumeLimit; 
@property (assign,nonatomic) float eUVolumeLimit;                //@synthesize eUVolumeLimit=_eUVolumeLimit - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                //@synthesize category=_category - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCategory;
-(void)setEUVolumeLimit:(float)arg1 ;
-(float)eUVolumeLimit;
-(void)setHasEUVolumeLimit:(BOOL)arg1 ;
-(BOOL)hasEUVolumeLimit;
-(BOOL)readFrom:(id)arg1 ;
@end

