/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableCell.h>

@class UIImageView, UIView, MSAudioProgressView, SUPlayerStatus;

@interface MSTableCell : SUTableCell {

	UIImageView* _backsideSnapshotView;
	UIView* _previewContainerView;
	MSAudioProgressView* _previewProgressView;
	SUPlayerStatus* _previewStatus;

}

@property (nonatomic,retain) SUPlayerStatus * previewStatus;              //@synthesize previewStatus=_previewStatus - In the implementation block
-(void)dealloc;
-(void)setPreviewStatus:(SUPlayerStatus *)arg1 ;
-(void)setPreviewStatus:(id)arg1 animated:(BOOL)arg2 ;
-(void)_flipFromPreviewProgressView;
-(void)_destroyPreviewProgressView;
-(void)_flipToPreviewProgressView;
-(SUPlayerStatus *)previewStatus;
@end
