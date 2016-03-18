/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSSpecifierObserver <NSObject>
@property (nonatomic,readonly) long long observerType; 
@required
-(void)dataSource:(id)arg1 performUpdates:(id)arg2;
-(void)invalidateSpecifiersForDataSource:(id)arg1;
-(long long)observerType;

@end
