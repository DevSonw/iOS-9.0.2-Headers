/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding> {

	BOOL _wantsFrequencyChangeNotifications;

}

@property (assign,nonatomic) BOOL wantsFrequencyChangeNotifications;              //@synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications - In the implementation block
+(id)sharedInstance;
+(BOOL)supportsSecureCoding;
-(void)save;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)wantsFrequencyChangeNotifications;
-(void)setWantsFrequencyChangeNotifications:(BOOL)arg1 ;
@end

