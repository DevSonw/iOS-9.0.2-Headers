/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FMSystemVersionNumber : NSObject {

	long long _baseNumber;
	NSString* _baseLetter;
	long long _buildNumber;
	NSString* _suffix;

}

@property (assign,nonatomic) long long baseNumber;               //@synthesize baseNumber=_baseNumber - In the implementation block
@property (nonatomic,copy) NSString * baseLetter;                //@synthesize baseLetter=_baseLetter - In the implementation block
@property (assign,nonatomic) long long buildNumber;              //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * suffix;                    //@synthesize suffix=_suffix - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)baseLetter;
-(long long)baseNumber;
-(void)setBaseNumber:(long long)arg1 ;
-(void)setBaseLetter:(NSString *)arg1 ;
-(long long)buildNumber;
-(void)setBuildNumber:(long long)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
@end
