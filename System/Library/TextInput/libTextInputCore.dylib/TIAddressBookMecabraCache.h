/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TIAddressBookMecabraCache : NSObject {

	BOOL _valid;
	NSArray* _nameReadingPairs;

}

@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy) NSArray * nameReadingPairs;               //@synthesize nameReadingPairs=_nameReadingPairs - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(void)setValid:(BOOL)arg1 ;
-(void)setNameReadingPairs:(NSArray *)arg1 ;
-(NSArray *)nameReadingPairs;
@end
