/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKContactsSearchManagerDelegate.h>

@class CKContactsSearchManager, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate> {

	CKContactsSearchManager* _contactsSearchManager;

}

@property (nonatomic,retain) CKContactsSearchManager * contactsSearchManager;              //@synthesize contactsSearchManager=_contactsSearchManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2 ;
-(CKContactsSearchManager *)contactsSearchManager;
-(void)updateShortcutItems;
-(void)setContactsSearchManager:(CKContactsSearchManager *)arg1 ;
@end
