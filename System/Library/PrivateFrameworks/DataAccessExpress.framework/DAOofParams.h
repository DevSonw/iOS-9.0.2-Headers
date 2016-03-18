/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface DAOofParams : NSObject {

	int _oofState;
	int _externalState;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _message;
	NSString* _externalMessage;

}

@property (assign,nonatomic) int oofState;                            //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int externalState;                       //@synthesize externalState=_externalState - In the implementation block
@property (nonatomic,retain) NSString * externalMessage;              //@synthesize externalMessage=_externalMessage - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)startTime;
-(NSString *)externalMessage;
-(id)dictionaryRepresentationForASSettingTask;
-(int)oofState;
-(void)setOofState:(int)arg1 ;
-(void)setExternalMessage:(NSString *)arg1 ;
-(int)externalState;
-(void)setExternalState:(int)arg1 ;
-(void)enableOof:(BOOL)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4 ;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
@end
