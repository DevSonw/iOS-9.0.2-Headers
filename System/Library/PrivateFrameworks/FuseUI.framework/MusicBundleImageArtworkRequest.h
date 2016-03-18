/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSBundle, NSString, UIColor;

@interface MusicBundleImageArtworkRequest : NSObject <NSCopying> {

	NSBundle* _bundle;
	NSString* _imageName;
	long long _renderingMode;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) NSBundle * bundle;                      //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
@property (assign,nonatomic) long long renderingMode;                  //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)renderingMode;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSBundle *)bundle;
-(id)initWithImageName:(id)arg1 inBundle:(id)arg2 ;
-(void)setRenderingMode:(long long)arg1 ;
-(NSString *)imageName;
@end
