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

@interface NACAudioRouteBuffer : PBCodable <NSCopying> {

	NSString* _routeName;
	int _routeSubtype;
	int _routeType;
	NSString* _uniqueIdentifier;
	BOOL _picked;
	BOOL _supportsVolumeControl;
	SCD_Struct_NA2 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteName; 
@property (nonatomic,retain) NSString * routeName;                       //@synthesize routeName=_routeName - In the implementation block
@property (assign,nonatomic) BOOL hasRouteType; 
@property (assign,nonatomic) int routeType;                              //@synthesize routeType=_routeType - In the implementation block
@property (assign,nonatomic) BOOL hasRouteSubtype; 
@property (assign,nonatomic) int routeSubtype;                           //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsVolumeControl; 
@property (assign,nonatomic) BOOL supportsVolumeControl;                 //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) BOOL hasPicked; 
@property (assign,nonatomic) BOOL picked;                                //@synthesize picked=_picked - In the implementation block
-(NSString *)routeName;
-(int)routeSubtype;
-(void)setRouteName:(NSString *)arg1 ;
-(void)setPicked:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)routeType;
-(void)setHasRouteType:(BOOL)arg1 ;
-(void)setRouteType:(int)arg1 ;
-(BOOL)hasRouteType;
-(BOOL)hasUniqueIdentifier;
-(BOOL)hasRouteName;
-(void)setRouteSubtype:(int)arg1 ;
-(void)setHasRouteSubtype:(BOOL)arg1 ;
-(BOOL)hasRouteSubtype;
-(void)setHasPicked:(BOOL)arg1 ;
-(BOOL)hasPicked;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)picked;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(void)setHasSupportsVolumeControl:(BOOL)arg1 ;
-(BOOL)hasSupportsVolumeControl;
-(BOOL)supportsVolumeControl;
@end
