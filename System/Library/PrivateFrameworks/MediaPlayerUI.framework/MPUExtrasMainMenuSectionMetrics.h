/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUExtrasMainMenuSectionMetricsDataSource;
#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
@class UIFontDescriptor;

@interface MPUExtrasMainMenuSectionMetrics : NSObject {

	double _fittingWidth;
	BOOL _needsUpdate;
	long long _itemCount;
	CGSize* _calculatedSizes;
	id<MPUExtrasMainMenuSectionMetricsDataSource> _dataSource;
	UIFontDescriptor* _desiredFontDescriptor;
	UIFontDescriptor* _minimumFontDescriptor;
	double _desiredCellSpacing;
	double _minimumCellSpacing;
	double _desiredWidth;
	UIFontDescriptor* _fittingFontDescriptor;
	double _fittingCellSpacing;
	CGSize _totalFittingSize;

}

@property (assign,nonatomic,__weak) id<MPUExtrasMainMenuSectionMetricsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * desiredFontDescriptor;                                     //@synthesize desiredFontDescriptor=_desiredFontDescriptor - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * minimumFontDescriptor;                                     //@synthesize minimumFontDescriptor=_minimumFontDescriptor - In the implementation block
@property (assign,nonatomic) double desiredCellSpacing;                                                    //@synthesize desiredCellSpacing=_desiredCellSpacing - In the implementation block
@property (assign,nonatomic) double minimumCellSpacing;                                                    //@synthesize minimumCellSpacing=_minimumCellSpacing - In the implementation block
@property (assign,nonatomic) double desiredWidth;                                                          //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (nonatomic,readonly) UIFontDescriptor * fittingFontDescriptor;                                   //@synthesize fittingFontDescriptor=_fittingFontDescriptor - In the implementation block
@property (nonatomic,readonly) double fittingCellSpacing;                                                  //@synthesize fittingCellSpacing=_fittingCellSpacing - In the implementation block
@property (nonatomic,readonly) CGSize totalFittingSize;                                                    //@synthesize totalFittingSize=_totalFittingSize - In the implementation block
-(void)_setNeedsUpdate;
-(void)setDataSource:(id<MPUExtrasMainMenuSectionMetricsDataSource>)arg1 ;
-(void)dealloc;
-(id<MPUExtrasMainMenuSectionMetricsDataSource>)dataSource;
-(double)desiredWidth;
-(void)setDesiredWidth:(double)arg1 ;
-(void)_recalculateSizes;
-(UIFontDescriptor *)fittingFontDescriptor;
-(CGSize)sizeForCellAtIndex:(long long)arg1 ;
-(void)setDesiredFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)setMinimumFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)setMinimumCellSpacing:(double)arg1 ;
-(void)setDesiredCellSpacing:(double)arg1 ;
-(void)updateSizes;
-(CGSize)totalFittingSize;
-(double)fittingCellSpacing;
-(void)_updateAllMetrics;
-(double)desiredCellSpacing;
-(UIFontDescriptor *)desiredFontDescriptor;
-(CGSize)_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(double)arg2 itemCount:(long long)arg3 itemSizes:(out CGSize*)arg4 ;
-(void)setFittingWidth:(double)arg1 ;
-(UIFontDescriptor *)minimumFontDescriptor;
-(double)minimumCellSpacing;
@end

