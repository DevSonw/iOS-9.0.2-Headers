/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPassbookSettingsOptionsDelegate.h>

@class CNContact, NSDictionary, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPassbookSettingsOptionsDelegate> {

	CNContact* _defaultShippingAddress;
	CNContact* _defaultContactEmail;
	CNContact* _defaultContactName;
	CNContact* _defaultContactPhone;
	NSDictionary* _defaultBillingAddresses;

}

@property (nonatomic,retain) CNContact * defaultShippingAddress; 
@property (nonatomic,retain) NSDictionary * defaultBillingAddresses;              //@synthesize defaultBillingAddresses=_defaultBillingAddresses - In the implementation block
@property (nonatomic,retain) CNContact * defaultContactEmail; 
@property (nonatomic,retain) CNContact * defaultContactPhone; 
@property (nonatomic,retain) CNContact * defaultContactName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaults;
-(id)defaultBillingAddressForPaymentPass:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2 ;
-(void)_setKeychainData:(id)arg1 forKey:(id)arg2 ;
-(void)_keychainData:(id*)arg1 forKey:(id)arg2 ;
-(id)_contactForKeychainKey:(id)arg1 ;
-(void)_setContact:(id)arg1 property:(id)arg2 forKeychainKey:(id)arg3 ;
-(id)_rawDefaultBillingAddresses;
-(NSDictionary *)defaultBillingAddresses;
-(void)_setContact:(id)arg1 forKeychainKey:(id)arg2 ;
-(CNContact *)defaultShippingAddress;
-(CNContact *)defaultContactEmail;
-(CNContact *)defaultContactPhone;
-(void)setDefaultShippingAddress:(CNContact *)arg1 ;
-(void)setDefaultContactEmail:(CNContact *)arg1 ;
-(void)setDefaultContactPhone:(CNContact *)arg1 ;
-(void)deleteDefaultShippingAddress;
-(void)deleteDefaultBillingAddress:(id)arg1 ;
-(void)deleteDefaultContactEmail;
-(void)deleteDefaultContactPhone;
-(CNContact *)defaultContactName;
-(void)setDefaultContactName:(CNContact *)arg1 ;
-(void)deleteDefaultContactName;
-(void)setDefaultBillingAddresses:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
@end

