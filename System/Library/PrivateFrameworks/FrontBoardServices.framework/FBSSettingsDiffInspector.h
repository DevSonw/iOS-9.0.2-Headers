/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {

	BSMutableSettings* _observerInfo;
	BSMutableSettings* _otherSettingsObserverInfo;
	BOOL _iteratingObservers;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)inspectDiff:(id)arg1 withContext:(void*)arg2 ;
-(void)observeOtherSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3 ;
-(void)_observeSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)removeAllObservers;
@end
