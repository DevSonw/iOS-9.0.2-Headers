/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {

	OITSUNoCopyDictionary* mFontTable;
	NSMutableArray* mFontsInOrderOfInsertion;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(void)clear;
-(id)fonts;
-(id)createFontWithName:(id)arg1 ;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFont:(id)arg1 ;
-(id)fontWithName:(id)arg1 ;
-(id)fontWithName:(id)arg1 create:(BOOL)arg2 ;
@end

