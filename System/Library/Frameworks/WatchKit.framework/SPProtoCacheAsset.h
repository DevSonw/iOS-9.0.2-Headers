/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SPProtoCacheAsset : PBCodable <NSCopying> {

	double _accessDate;
	unsigned long long _size;
	NSString* _key;
	unsigned _state;

}

@property (assign,nonatomic) unsigned state;                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double accessDate;                    //@synthesize accessDate=_accessDate - In the implementation block
-(unsigned long long)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(double)accessDate;
-(void)setAccessDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

