/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface QLProgressView : UIView {

	int _backgroundColorType;
	UIActivityIndicatorView* _progressIndicator;
	UILabel* _loadingTextLabel;

}

@property (copy) NSString * loadingText; 
@property (assign) int backgroundColorType; 
-(void)setBackgroundColorType:(int)arg1 ;
-(int)backgroundColorType;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)_update;
-(NSString *)loadingText;
-(void)setLoadingText:(NSString *)arg1 ;
@end

