/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableArray, NSArray;

@interface MKOrientationContext : NSObject {

	NSMutableArray* orientViews;
	NSArray* relativeViews;
	UIView* projectionView;
	CGRect* relativeViewFrames;

}
-(void)_computeRelativeViewFrame:(id)arg1 ;
-(void)invalidateView:(id)arg1 ;
-(void)_computeRelativeViewFrames;
-(id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(UIView*)arg3 ;
-(void)dealloc;
@end

