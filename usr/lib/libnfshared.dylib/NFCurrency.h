/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NFCurrency : NSObject
+(unsigned long long)decodeBCDAmount:(id)arg1 ;
+(id)encodeBCDAmount:(unsigned long long)arg1 ;
+(id)getCurrencyStringCodeFromNumericCode:(unsigned)arg1 ;
+(int)getFractionDigitsFromCurrencyStringCode:(id)arg1 ;
@end

