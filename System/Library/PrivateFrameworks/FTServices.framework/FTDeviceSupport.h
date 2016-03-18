/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FTDeviceSupport : NSObject {

	NSString* _number;
	BOOL _blockPost;
	BOOL _supportsFrontCamera;
	BOOL _supportsBackCamera;
	BOOL _supportsiMessage;
	BOOL _supportsSMS;
	BOOL _supportsMMS;
	BOOL _mmsConfigured;
	BOOL _supportsHandoff;
	BOOL _supportsTethering;
	BOOL _supportsFT;
	BOOL _supportsFTA;
	BOOL _supportsWiFi;
	BOOL _supportsWLAN;
	BOOL _supportsNonWiFiFaceTime;
	BOOL _supportsCellularData;
	BOOL _shouldUseSIMState;
	BOOL _commCenterDead;
	BOOL _simBecameNotReady;
	BOOL _simInserted;
	int _carrierBundleSupported;
	int _iMessageAllowedToken;
	BOOL _faceTimeBlocked;
	BOOL _iMessageBlocked;
	BOOL _accountModificationRestricted;
	long long _performanceClass;

}

@property (nonatomic,readonly) BOOL isTelephonyDevice; 
@property (nonatomic,readonly) BOOL faceTimeAvailable; 
@property (nonatomic,readonly) BOOL faceTimeBlocked; 
@property (nonatomic,readonly) BOOL faceTimeSupported; 
@property (nonatomic,readonly) BOOL callingAvailable; 
@property (nonatomic,readonly) BOOL callingBlocked; 
@property (nonatomic,readonly) BOOL callingSupported; 
@property (nonatomic,readonly) BOOL nonWifiFaceTimeAvailable; 
@property (nonatomic,readonly) BOOL nonWifiCallingAvailable; 
@property (nonatomic,readonly) BOOL iMessageAvailable; 
@property (nonatomic,readonly) BOOL iMessageBlocked; 
@property (nonatomic,readonly) BOOL iMessageSupported; 
@property (nonatomic,readonly) BOOL identityServicesSupported; 
@property (nonatomic,readonly) BOOL madridAvailable; 
@property (nonatomic,readonly) BOOL madridBlocked; 
@property (nonatomic,readonly) BOOL madridSupported; 
@property (nonatomic,readonly) BOOL conferencingEnabled; 
@property (nonatomic,readonly) BOOL conferencingBlocked; 
@property (nonatomic,readonly) BOOL conferencingAllowed; 
@property (nonatomic,readonly) BOOL registrationSupported; 
@property (nonatomic,readonly) BOOL commCenterDead; 
@property (nonatomic,readonly) BOOL accountModificationRestricted; 
@property (nonatomic,readonly) BOOL wantsBreakBeforeMake; 
@property (nonatomic,readonly) BOOL SIMInserted; 
@property (nonatomic,readonly) BOOL isC2KEquipment; 
@property (nonatomic,readonly) BOOL supportsSimultaneousVoiceAndDataRightNow; 
@property (nonatomic,readonly) BOOL supportsSMSIdentification; 
@property (nonatomic,readonly) BOOL supportsAppleIDIdentification; 
@property (nonatomic,readonly) BOOL supportsHandoff;                                       //@synthesize supportsHandoff=_supportsHandoff - In the implementation block
@property (nonatomic,readonly) BOOL supportsTethering;                                     //@synthesize supportsTethering=_supportsTethering - In the implementation block
@property (nonatomic,readonly) BOOL supportsSMS;                                           //@synthesize supportsSMS=_supportsSMS - In the implementation block
@property (nonatomic,readonly) BOOL supportsMMS;                                           //@synthesize supportsMMS=_supportsMMS - In the implementation block
@property (nonatomic,readonly) BOOL mmsConfigured;                                         //@synthesize mmsConfigured=_mmsConfigured - In the implementation block
@property (nonatomic,readonly) BOOL supportsWiFi;                                          //@synthesize supportsWiFi=_supportsWiFi - In the implementation block
@property (nonatomic,readonly) BOOL supportsCellularData;                                  //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (nonatomic,readonly) BOOL supportsWLAN;                                          //@synthesize supportsWLAN=_supportsWLAN - In the implementation block
@property (nonatomic,readonly) BOOL supportsNonWiFiFaceTime;                               //@synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime - In the implementation block
@property (nonatomic,readonly) BOOL supportsNonWiFiCalling; 
@property (nonatomic,readonly) BOOL supportsFrontFacingCamera;                             //@synthesize supportsFrontCamera=_supportsFrontCamera - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackFacingCamera;                              //@synthesize supportsBackCamera=_supportsBackCamera - In the implementation block
@property (nonatomic,readonly) NSDictionary * CTNetworkInformation; 
@property (nonatomic,readonly) NSDictionary * telephonyCapabilities; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) NSString * deviceIDPrefix; 
@property (nonatomic,readonly) NSString * deviceTypeIDPrefix; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
@property (nonatomic,readonly) NSString * telephoneNumber; 
@property (nonatomic,readonly) long long performanceClass; 
@property (nonatomic,readonly) long long deviceType; 
+(id)sharedInstance;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)model;
-(void)_updateCapabilities;
-(BOOL)supportsSMS;
-(BOOL)isTelephonyDevice;
-(BOOL)faceTimeSupported;
-(BOOL)callingSupported;
-(NSString *)deviceName;
-(BOOL)supportsMMS;
-(BOOL)madridSupported;
-(BOOL)supportsSMSIdentification;
-(BOOL)callingAvailable;
-(BOOL)iMessageAvailable;
-(BOOL)faceTimeAvailable;
-(BOOL)supportsCellularData;
-(BOOL)supportsWiFi;
-(BOOL)supportsWLAN;
-(BOOL)accountModificationRestricted;
-(BOOL)isC2KEquipment;
-(void)_watchNotifyTokens;
-(void)_updateManagedConfigurationSettings;
-(void)_registerForCarrierNotifications;
-(void)_registerForCapabilityNotifications;
-(void)_registerForCoreTelephonyNotifications;
-(void)_registerForLockdownNotifications;
-(void)_registerForManagedConfigurationNotifications;
-(void)_unregisterForManagedConfigurationNotifications;
-(void)_unregisterForCoreTelephonyNotifications;
-(void)_unregisterForCarrierNotifications;
-(void)_unregisterForCommCenterReadyNotifications;
-(long long)performanceClass;
-(void)_registerForCommCenterReadyNotifications;
-(BOOL)madridBlocked;
-(BOOL)callingBlocked;
-(BOOL)faceTimeBlocked;
-(BOOL)madridAvailable;
-(BOOL)conferencingEnabled;
-(BOOL)conferencingBlocked;
-(BOOL)conferencingAllowed;
-(BOOL)supportsAppleIDIdentification;
-(NSDictionary *)telephonyCapabilities;
-(void)_lockdownStateChanged:(id)arg1 ;
-(void)carrierSettingsChanged:(id)arg1 ;
-(void)_commCenterAlive;
-(void)_operatorChanged;
-(void)_carrierChanged;
-(void)_registerForInternalCoreTelephonyNotifications;
-(BOOL)commCenterDead;
-(BOOL)iMessageBlocked;
-(BOOL)identityServicesSupported;
-(BOOL)supportsNonWiFiCalling;
-(BOOL)registrationSupported;
-(NSString *)deviceIDPrefix;
-(NSString *)deviceTypeIDPrefix;
-(BOOL)SIMInserted;
-(void)_handleTechnologyChange:(id)arg1 ;
-(void)_handlePhoneNumberRegistrationStateChanged:(id)arg1 ;
-(NSDictionary *)CTNetworkInformation;
-(BOOL)nonWifiCallingAvailable;
-(NSString *)enclosureColor;
-(BOOL)supportsHandoff;
-(BOOL)supportsTethering;
-(BOOL)nonWifiFaceTimeAvailable;
-(BOOL)supportsFrontFacingCamera;
-(BOOL)supportsBackFacingCamera;
-(BOOL)wantsBreakBeforeMake;
-(BOOL)supportsNonWiFiFaceTime;
-(BOOL)mmsConfigured;
-(NSString *)telephoneNumber;
-(BOOL)supportsSimultaneousVoiceAndDataRightNow;
-(NSString *)userAgentString;
-(NSString *)deviceInformationString;
-(NSString *)productBuildVersion;
-(BOOL)iMessageSupported;
-(void)_simStatusChanged:(id)arg1 ;
-(NSString *)deviceColor;
-(NSString *)productName;
-(NSString *)productVersion;
-(long long)deviceType;
@end
