/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFPageViewControllerDataSource <NSObject>
@optional
-(long long)presentationCountForPageViewController:(id)arg1;
-(long long)presentationIndexForPageViewController:(id)arg1;

@required
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;

@end

