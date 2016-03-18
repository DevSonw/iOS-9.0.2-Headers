/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptController.h>

@class NSMutableArray;

@interface CKModalTranscriptController : CKTranscriptController {

	BOOL _mimeType;
	BOOL _alreadySetUp;
	NSMutableArray* _partsToInsert;
	NSMutableArray* _typesToInsert;
	int _entryViewInvisible;
	BOOL _cameraSelectionDisabled;
	BOOL _forceMMS;

}

@property (assign,nonatomic) BOOL mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) BOOL forceMMS;              //@synthesize forceMMS=_forceMMS - In the implementation block
-(void)dealloc;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)mimeType;
-(BOOL)forceMMS;
-(void)setForceMMS:(BOOL)arg1 ;
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2 ;
-(void)registerForNotifications;
-(void)_setConversation:(id)arg1 ;
-(void)transitionFromNewMessageToConversation;
-(BOOL)_shouldUseExistingConversations;
-(BOOL)shouldDismissAfterSend;
-(BOOL)_shouldAllowCameraAttachments;
-(void)disableCameraAttachments;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6 ;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(BOOL)_insertMediaObject:(id)arg1 ;
-(void)_conversationListDidFinishLoading:(id)arg1 ;
-(BOOL)_shouldUseDefaultFirstResponder;
-(void)setMimeType:(BOOL)arg1 ;
@end
