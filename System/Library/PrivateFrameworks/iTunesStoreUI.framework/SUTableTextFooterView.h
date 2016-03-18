/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIFont, UIColor, NSArray;

@interface SUTableTextFooterView : UIView {

	UIFont* _font;
	UIColor* _shadowColor;
	long long _textAlignment;
	UIColor* _textColor;
	NSArray* _textLines;

}

@property (nonatomic,retain) UIFont * font;                        //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) long long textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSArray * textLines;                  //@synthesize textLines=_textLines - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)sizeToFit;
-(UIColor *)shadowColor;
-(UIFont *)font;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)setTextLines:(NSArray *)arg1 ;
-(NSArray *)textLines;
@end
