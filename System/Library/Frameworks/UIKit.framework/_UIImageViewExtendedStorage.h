/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSArray;

@interface _UIImageViewExtendedStorage : NSObject {

	BOOL _highlighted;
	UIImage* _image;
	UIImage* _highlightedImage;
	NSArray* _animationImages;
	NSArray* _highlightedAnimationImages;
	double _animationDuration;
	long long _animationRepeatCount;
	int _drawMode;
	long long _defaultRenderingMode;
	BOOL _masksTemplateImages;
	unsigned long long _templateImageRenderingEffects;
	UIImage* _displayedImage;
	UIImage* _displayedHighlightedImage;

}
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end

