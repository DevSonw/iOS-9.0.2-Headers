/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceResponse.h>

@class BSMachPortSendRight;

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {

	BOOL _supportsTaskSuspension;
	BOOL _supportsTaskSuspensionOnLock;
	BSMachPortSendRight* _taskPort;

}

@property (assign,nonatomic) BOOL supportsTaskSuspension;                    //@synthesize supportsTaskSuspension=_supportsTaskSuspension - In the implementation block
@property (assign,nonatomic) BOOL supportsTaskSuspensionOnLock;              //@synthesize supportsTaskSuspensionOnLock=_supportsTaskSuspensionOnLock - In the implementation block
@property (nonatomic,retain) BSMachPortSendRight * taskPort;                 //@synthesize taskPort=_taskPort - In the implementation block
-(void)dealloc;
-(void)setSupportsTaskSuspension:(BOOL)arg1 ;
-(void)setSupportsTaskSuspensionOnLock:(BOOL)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BSMachPortSendRight *)taskPort;
-(void)setTaskPort:(BSMachPortSendRight *)arg1 ;
-(BOOL)supportsTaskSuspension;
-(BOOL)supportsTaskSuspensionOnLock;
@end
