/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

@interface _UIDocumentActivityItemProvider : UIActivityItemProvider {

	BOOL _userCancelled;
	UIDocumentInteractionController* _documentInteractionController;

}

@property (__weak) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (assign) BOOL userCancelled;                                                           //@synthesize userCancelled=_userCancelled - In the implementation block
-(id)item;
-(void)main;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(void)setUserCancelled:(BOOL)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(BOOL)userCancelled;
@end
