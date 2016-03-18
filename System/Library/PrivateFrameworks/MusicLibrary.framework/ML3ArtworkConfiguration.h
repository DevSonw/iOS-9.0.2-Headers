/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ML3ArtworkConfiguration : NSObject {

	NSMutableDictionary* _artworkConfigurationDictionary;
	NSMutableDictionary* _supportedSizesCache;
	double _mainScreenScale;

}

@property (nonatomic,retain) NSMutableDictionary * artworkConfigurationDictionary;              //@synthesize artworkConfigurationDictionary=_artworkConfigurationDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supportedSizesCache;                         //@synthesize supportedSizesCache=_supportedSizesCache - In the implementation block
@property (assign,nonatomic) double mainScreenScale;                                            //@synthesize mainScreenScale=_mainScreenScale - In the implementation block
+(id)systemConfiguration;
-(id)supportedSizesForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(id)sizesToAutogenerateForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(id)description;
-(NSMutableDictionary *)supportedSizesCache;
-(id)_supportedSizeKeysForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(NSMutableDictionary *)artworkConfigurationDictionary;
-(void)setArtworkConfigurationDictionary:(NSMutableDictionary *)arg1 ;
-(void)setSupportedSizesCache:(NSMutableDictionary *)arg1 ;
-(void)setMainScreenScale:(double)arg1 ;
-(double)mainScreenScale;
@end
