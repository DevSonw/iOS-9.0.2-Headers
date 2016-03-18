/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROBrailleDisplayCommandDispatcherDelegate <NSObject>
@required
-(id)brailleInputManager;
-(void)handleCommandPanLeftForDispatcher:(id)arg1;
-(void)handleCommandPanRightForDispatcher:(id)arg1;
-(void)handleCommandMoveLeftForDispatcher:(id)arg1;
-(void)handleCommandMoveRightForDispatcher:(id)arg1;
-(void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandDeleteForDispatcher:(id)arg1;
-(void)handleCommandForwardDeleteForDispatcher:(id)arg1;
-(void)handleCommandEscapeForDispatcher:(id)arg1;
-(void)handleCommandTranslateForDispatcher:(id)arg1;
-(void)handleCommandReturnBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2;

@end
