/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIButton, UIView;

@interface SKUIStackedBarCell : UIButton {

	BOOL _expanded;
	UILabel* _expandedLabel;
	UIButton* _backButton;
	UIView* _separator;

}

@property (assign,nonatomic) BOOL expanded;                        //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UIButton * backButton;              //@synthesize backButton=_backButton - In the implementation block
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(UIButton *)backButton;
@end

