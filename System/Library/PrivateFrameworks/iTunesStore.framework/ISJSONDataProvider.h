/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDataProvider.h>

@interface ISJSONDataProvider : ISDataProvider {

	unsigned long long _options;

}

@property (assign) unsigned long long parserOptions;              //@synthesize options=_options - In the implementation block
-(unsigned long long)parserOptions;
-(void)setParserOptions:(unsigned long long)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
@end

