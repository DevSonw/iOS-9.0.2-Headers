/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADColorScheme, OADStyleMatrix, OADFontScheme;

@interface OADBaseStylesBase : NSObject {

	OADColorScheme* mColorScheme;
	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;

}

@property (nonatomic,retain) OADColorScheme * colorScheme; 
@property (nonatomic,retain) OADStyleMatrix * styleMatrix; 
@property (nonatomic,retain) OADFontScheme * fontScheme; 
-(void)dealloc;
-(id)description;
-(OADColorScheme *)colorScheme;
-(void)setColorScheme:(OADColorScheme *)arg1 ;
-(OADStyleMatrix *)styleMatrix;
-(OADFontScheme *)fontScheme;
-(void)setStyleMatrix:(OADStyleMatrix *)arg1 ;
-(void)setFontScheme:(OADFontScheme *)arg1 ;
@end

