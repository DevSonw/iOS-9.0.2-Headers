/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIInputView;

@interface _UIInputViewContent : UIView {

	double _contentHeight;
	double _contentWidth;
	UIInputView* _inputView;
	int _unclippableCorners;

}

@property (assign,nonatomic) int _unclippableCorners;              //@synthesize unclippableCorners=_unclippableCorners - In the implementation block
-(void)addSubview:(id)arg1 ;
-(CGSize)_contentSize;
-(BOOL)_isToolbar;
-(CGSize)_sizeFittingContentViews;
-(id)initWithFrame:(CGRect)arg1 inputView:(id)arg2 ;
-(void)_setToolbarBackgroundImage:(id)arg1 ;
-(void)_setToolbarBackgroundViewWithImage:(id)arg1 ;
-(void)_updateCornerClipping;
-(int)_unclippableCorners;
-(void)set_unclippableCorners:(int)arg1 ;
@end

