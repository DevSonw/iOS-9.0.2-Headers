/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RMSControlInterface : NSObject {

	BOOL _supportsSpeakerSelection;
	BOOL _supportsVolumeControl;
	BOOL _supportsDirectionalControl;

}

@property (assign,nonatomic) BOOL supportsSpeakerSelection;                //@synthesize supportsSpeakerSelection=_supportsSpeakerSelection - In the implementation block
@property (assign,nonatomic) BOOL supportsVolumeControl;                   //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) BOOL supportsDirectionalControl;              //@synthesize supportsDirectionalControl=_supportsDirectionalControl - In the implementation block
-(id)protobuf;
-(void)setSupportsSpeakerSelection:(BOOL)arg1 ;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(void)setSupportsDirectionalControl:(BOOL)arg1 ;
-(BOOL)supportsSpeakerSelection;
-(BOOL)supportsVolumeControl;
-(BOOL)supportsDirectionalControl;
-(id)initWithProtobuf:(id)arg1 ;
@end
