/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TITypologyStatistic.h>

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic {

	TITypologyTimer* _timer;
	TITypologyTimer* _adjustedTimer;

}

@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double adjustedElapsedTime; 
@property (nonatomic,retain) TITypologyTimer * timer;                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) TITypologyTimer * adjustedTimer;              //@synthesize adjustedTimer=_adjustedTimer - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTimer:(TITypologyTimer *)arg1 ;
-(TITypologyTimer *)timer;
-(double)elapsedTime;
-(double)adjustedElapsedTime;
-(TITypologyTimer *)adjustedTimer;
-(void)setAdjustedTimer:(TITypologyTimer *)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(id)structuredReport;
@end
