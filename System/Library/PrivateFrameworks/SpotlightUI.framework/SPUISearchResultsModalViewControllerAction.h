/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchResultsViewControllerAction.h>

@class NSString;

@interface SPUISearchResultsModalViewControllerAction : SPUISearchResultsViewControllerAction {

	BOOL _opening;

}

@property (readonly) BOOL requiresNavigationController; 
@property (readonly) NSString * buttonActionTitle; 
@property (assign) BOOL opening;                                     //@synthesize opening=_opening - In the implementation block
-(id)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)done:(id)arg1 ;
-(void)performButtonAction;
-(BOOL)opening;
-(void)cancelAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)requiresNavigationController;
-(NSString *)buttonActionTitle;
-(void)openInApp:(id)arg1 ;
-(void)loadModalViewControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setOpening:(BOOL)arg1 ;
@end
