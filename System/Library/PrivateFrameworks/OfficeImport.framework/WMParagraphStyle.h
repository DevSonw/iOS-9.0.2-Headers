/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WMStyle.h>

@interface WMParagraphStyle : WMStyle {

	BOOL mIsInTextFrame;

}
+(BOOL)isShadingNull:(id)arg1 ;
-(void)mapBorders:(id)arg1 ;
-(void)addParagraphProperties:(id)arg1 fromListLevelProperties:(BOOL)arg2 ;
-(id)initWithWDStyle:(id)arg1 isInTextFrame:(BOOL)arg2 ;
-(void)addParagraphStyleCharacterProperties:(id)arg1 ;
-(BOOL)isRTLWithOverridesFromProperties:(id)arg1 ;
-(id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1 ;
-(id)initWithWDParagraphProperties:(id)arg1 isInTextFrame:(BOOL)arg2 ;
@end

