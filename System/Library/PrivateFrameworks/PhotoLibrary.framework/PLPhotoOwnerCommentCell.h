/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

@interface PLPhotoOwnerCommentCell : UITableViewCell {

	BOOL _usesCompactSeparators;
	NSAttributedString* _ownerString;
	UILabel* _ownerContentLabel;
	UIView* _styledSeparatorView;

}

@property (assign,nonatomic) BOOL usesCompactSeparators;                         //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
@property (nonatomic,copy) NSAttributedString * ownerString;                     //@synthesize ownerString=_ownerString - In the implementation block
@property (nonatomic,retain,readonly) UILabel * ownerContentLabel;               //@synthesize ownerContentLabel=_ownerContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(double)heightOfOwnerCellWithAsset:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3 ;
+(id)_ownerStringForAsset:(id)arg1 ;
-(void)setUsesCompactSeparators:(BOOL)arg1 ;
-(void)updateContentFromAsset:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(BOOL)usesCompactSeparators;
-(UIView *)styledSeparatorView;
-(void)setOwnerString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)ownerString;
-(UILabel *)ownerContentLabel;
@end
