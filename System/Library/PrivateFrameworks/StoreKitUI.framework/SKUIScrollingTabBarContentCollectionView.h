/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView {

	BOOL _performingLayout;

}

@property (assign,nonatomic) id<SKUIScrollingTabBarContentCollectionViewDelegate> delegate; 
@property (getter=isPerformingLayout,nonatomic,readonly) BOOL performingLayout;                          //@synthesize performingLayout=_performingLayout - In the implementation block
-(void)layoutSubviews;
-(void)_reuseCell:(id)arg1 ;
-(BOOL)isPerformingLayout;
@end
