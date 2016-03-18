/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDTableRow, WDTableCellProperties, WDText, NSString;

@interface WDTableCell : NSObject {

	unsigned long long mIndex;
	WDTableRow* mRow;
	WDTableCellProperties* mProperties;
	WDText* mText;
	NSString* mIdentifier;
	BOOL mUseTrackedProperties;

}
-(double)cellWidth;
-(void)dealloc;
-(id)row;
-(id)description;
-(id)identifier;
-(id)text;
-(void)setIdentifier:(id)arg1 ;
-(unsigned long long)index;
-(id)properties;
-(void)clearProperties;
-(id)initWithRow:(id)arg1 at:(unsigned long long)arg2 ;
-(BOOL)useTrackedProperties;
-(void)setUseTrackedProperties:(BOOL)arg1 ;
-(long long)compareIndex:(id)arg1 ;
@end
