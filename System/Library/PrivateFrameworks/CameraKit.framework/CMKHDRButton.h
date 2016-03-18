/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKExpandableMenuButton.h>

@class UIImageView;

@interface CMKHDRButton : CMKExpandableMenuButton {

	BOOL _allowsAutomaticHDR;
	UIImageView* __glyphView;

}

@property (assign,nonatomic) int HDRMode; 
@property (assign,nonatomic) BOOL allowsAutomaticHDR;                 //@synthesize allowsAutomaticHDR=_allowsAutomaticHDR - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;              //@synthesize _glyphView=__glyphView - In the implementation block
-(void)reloadData;
-(id)headerView;
-(void)_commonCMKHDRButtonInitialization;
-(void)setHDRMode:(int)arg1 ;
-(int)HDRMode;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 ;
-(UIImageView *)_glyphView;
-(id)hiddenIndexesWhileCollapsed;
-(int)modeForIndex:(long long)arg1 ;
-(long long)indexForMode:(int)arg1 ;
-(void)_updateCurrentGlyphImage;
-(id)_currentGlyphImage;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(BOOL)allowsAutomaticHDR;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
@end
