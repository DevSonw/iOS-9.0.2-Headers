/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneUpdateEvent.h>

@class FBSSceneClientSettingsDiff, FBSDisplay;

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent {

	FBSSceneClientSettingsDiff* _clientSettings;
	FBSDisplay* _display;

}

@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,retain) FBSDisplay * display;                                         //@synthesize display=_display - In the implementation block
-(void)dealloc;
-(FBSDisplay *)display;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
@end

