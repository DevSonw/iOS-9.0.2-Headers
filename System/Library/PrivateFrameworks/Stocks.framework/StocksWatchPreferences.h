/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSDomainAccessor;

@interface StocksWatchPreferences : NSObject {

	BOOL _changeColorSwapped;
	unsigned long long _textDirection;
	NPSDomainAccessor* _watchDefaults;

}
+(id)sharedPreferences;
-(void)dealloc;
-(id)init;
-(void)syncKey:(id)arg1 ;
-(id)defaultStockSymbol;
-(void)setDefaultStockSymbol:(id)arg1 ;
-(long long)complicationDisplayMode;
-(void)setComplicationDisplayMode:(long long)arg1 ;
-(void)syncSelectedStock;
-(void)syncStocksList;
-(void)syncChartInterval;
-(void)syncRowDataType;
@end

