/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWFigVideoDeviceStillImageCaptureDelegate <NSObject>
@required
-(void)captureDeviceWillBeginStillImageCapture:(id)arg1;
-(void)captureDevice:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW2)arg2;
-(void)captureDevice:(id)arg1 didCompleteStillImageCaptureWithPTS:(SCD_Struct_BW2)arg2;
-(void)captureDevice:(id)arg1 stillImageCaptureError:(int)arg2;

@end

