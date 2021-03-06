/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {

	MBSettingsContext* _settingsContext;
	NSMutableDictionary* _containersByID;

}
+(id)appManager;
+(id)appManagerWithSettingsContext:(id)arg1 ;
-(id)allContainers;
-(void)dealloc;
-(id)containerWithIdentifier:(id)arg1 ;
-(id)initWithSettingsContext:(id)arg1 ;
-(id)allApps;
-(id)_subdomainNamesForAppDomainNames:(id)arg1 ;
-(id)allDisabledDomainNames;
-(id)_copyUserAppsWithError:(id*)arg1 ;
-(id)_copySafeHarborsWithError:(id*)arg1 ;
-(id)_copyAppsWithPlists:(id)arg1 error:(id*)arg2 ;
-(id)createSafeHarborForContainer:(id)arg1 error:(id*)arg2 ;
-(void)removeAllDisabledDomainNames;
-(BOOL)isDomainNameEnabled:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(id)allRestrictedDomainNames;
-(BOOL)loadAppsWithSafeHarbors:(BOOL)arg1 error:(id*)arg2 ;
-(id)appWithIdentifier:(id)arg1 ;
-(void)removeOldSafeHarbors;
-(BOOL)moveAppDataToSafeHarborForContainer:(id)arg1 withError:(id*)arg2 ;
@end

