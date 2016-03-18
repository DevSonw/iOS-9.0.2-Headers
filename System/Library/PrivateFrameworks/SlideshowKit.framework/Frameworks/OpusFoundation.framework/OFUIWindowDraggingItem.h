/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFUIWindowDraggingPasteboard;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class UIImageView, UIImage;

@interface OFUIWindowDraggingItem : NSObject {

	id<OFUIWindowDraggingPasteboard> _object;
	UIImageView* _imageView;
	UIImage* _originalImage;
	UIImage* _placeHolderImage;
	CGRect _originalBounds;
	double _imageAspectRatio;
	CGRect _imageContentsRect;
	CGAffineTransform _originalTransform;
	BOOL _isReverting;
	double _rotation;

}

@property (nonatomic,retain) id<OFUIWindowDraggingPasteboard> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                              //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIImage * placeHolderImage;                           //@synthesize placeHolderImage=_placeHolderImage - In the implementation block
@property (assign,nonatomic) CGRect originalBounds;                                //@synthesize originalBounds=_originalBounds - In the implementation block
@property (assign,nonatomic) double imageAspectRatio;                              //@synthesize imageAspectRatio=_imageAspectRatio - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                             //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (assign,nonatomic) CGAffineTransform originalTransform;                  //@synthesize originalTransform=_originalTransform - In the implementation block
@property (assign,nonatomic) BOOL isReverting;                                     //@synthesize isReverting=_isReverting - In the implementation block
@property (assign,nonatomic) double rotation;                                      //@synthesize rotation=_rotation - In the implementation block
-(void)setOriginalImage:(UIImage *)arg1 ;
-(UIImage *)placeHolderImage;
-(void)setPlaceHolderImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(id<OFUIWindowDraggingPasteboard>)object;
-(UIImageView *)imageView;
-(void)setObject:(id<OFUIWindowDraggingPasteboard>)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGRect)imageContentsRect;
-(UIImage *)originalImage;
-(id)initWithObject:(id)arg1 image:(id)arg2 ;
-(CGRect)originalBounds;
-(void)setOriginalBounds:(CGRect)arg1 ;
-(double)imageAspectRatio;
-(void)setImageAspectRatio:(double)arg1 ;
-(CGAffineTransform)originalTransform;
-(void)setOriginalTransform:(CGAffineTransform)arg1 ;
-(BOOL)isReverting;
-(void)setIsReverting:(BOOL)arg1 ;
-(void)setImageContentsRect:(CGRect)arg1 ;
@end
