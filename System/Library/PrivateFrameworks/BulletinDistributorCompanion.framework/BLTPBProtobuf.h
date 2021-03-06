/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSProtobuf.h>

@class PBCodable, IDSProtobuf;

@interface BLTPBProtobuf : IDSProtobuf {

	BOOL _hasSequenceNumber;
	BOOL _isInitialSequenceNumber;
	PBCodable* _protobuf;
	unsigned long long _sequenceNumber;
	IDSProtobuf* _idsProtobuf;

}

@property (nonatomic,retain) PBCodable * protobuf;                           //@synthesize protobuf=_protobuf - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber;                         //@synthesize hasSequenceNumber=_hasSequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL isInitialSequenceNumber;                 //@synthesize isInitialSequenceNumber=_isInitialSequenceNumber - In the implementation block
@property (nonatomic,retain) IDSProtobuf * idsProtobuf;                      //@synthesize idsProtobuf=_idsProtobuf - In the implementation block
-(id)initWithIDSProtobuf:(id)arg1 ;
-(BOOL)isInitialSequenceNumber;
-(id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 sequenceNumber:(unsigned long long)arg4 isInitialSequenceNumber:(BOOL)arg5 ;
-(PBCodable *)protobuf;
-(void)setProtobuf:(PBCodable *)arg1 ;
-(IDSProtobuf *)idsProtobuf;
-(void)setIdsProtobuf:(IDSProtobuf *)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
@end

