/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUIIdentityPickerViewControllerDelegate <NSObject>
@required
-(BOOL)isPropertyEnabledForIdentityPickerController:(id)arg1;
-(SecIdentityRef)selectedIdentityForIdentityPickerController:(id)arg1;
-(void)identityPickerController:(id)arg1 setPropertyEnabled:(BOOL)arg2 withIdentity:(SecIdentityRef)arg3;
-(id)localizedSwitchNameForIdentityPickerController:(id)arg1;
-(id)copyIdentitiesForIdentityPickerController:(id)arg1;
-(SecTrustRef)copyTrustForIdentityPickerController:(id)arg1 identity:(SecIdentityRef)arg2;
-(id)emailAddressesForIdentityPickerController:(id)arg1;
-(BOOL)allowEditingForIdentityPickerController:(id)arg1;

@end
