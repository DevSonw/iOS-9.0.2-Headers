/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSRow.h>

@class NSArray;

@interface PTSChoiceRow : PTSRow {

	NSArray* _possibleValues;
	NSArray* _possibleTitles;
	NSArray* _possibleShortTitles;

}

@property (nonatomic,copy) NSArray * possibleValues;                   //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,copy) NSArray * possibleTitles;                   //@synthesize possibleTitles=_possibleTitles - In the implementation block
@property (nonatomic,copy) NSArray * possibleShortTitles;              //@synthesize possibleShortTitles=_possibleShortTitles - In the implementation block
-(id)pu_possibleValues:(id)arg1 ;
-(Class)rowTableViewCellClass;
-(id)possibleShortTitles:(id)arg1 ;
-(id)init;
-(void)setPossibleTitles:(NSArray *)arg1 ;
-(NSArray *)possibleTitles;
-(id)possibleValues:(id)arg1 titles:(id)arg2 ;
-(NSArray *)possibleValues;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(void)updateWithRow:(id)arg1 ;
-(void)setPossibleShortTitles:(NSArray *)arg1 ;
-(NSArray *)possibleShortTitles;
@end

