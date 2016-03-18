/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NARGlance, NSDictionary, NSArray;

@interface NARApplication : NSObject <NSSecureCoding> {

	unsigned long long _sequenceNumber;
	NSString* _launchServicesBundleType;
	NSString* _parentApplicationBundleIdentifier;
	NARGlance* _glance;
	NSDictionary* _infoPlist;
	NSDictionary* _localizedStrings;
	NSDictionary* _iTunesPlistStrings;

}

@property (nonatomic,readonly) NSString * applicationIdentifier; 
@property (nonatomic,readonly) NSString * bundleName; 
@property (nonatomic,readonly) NSDictionary * localizedBundleNames; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) NSDictionary * localizedDisplayNames; 
@property (nonatomic,readonly) NSArray * supportedSchemes; 
@property (nonatomic,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * itemName; 
@property (assign,nonatomic) unsigned long long sequenceNumber;                                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * launchServicesBundleType;                                //@synthesize launchServicesBundleType=_launchServicesBundleType - In the implementation block
@property (nonatomic,readonly) NSArray * localizations; 
@property (nonatomic,copy,readonly) NSString * parentApplicationBundleIdentifier;              //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NARGlance * glance;                                               //@synthesize glance=_glance - In the implementation block
@property (nonatomic,retain) NSDictionary * infoPlist;                                         //@synthesize infoPlist=_infoPlist - In the implementation block
@property (nonatomic,retain) NSDictionary * localizedStrings;                                  //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * iTunesPlistStrings;                                //@synthesize iTunesPlistStrings=_iTunesPlistStrings - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)applicationIdentifier;
-(NSArray *)localizations;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(void)setInfoPlist:(NSDictionary *)arg1 ;
-(NSString *)bundleVersion;
-(unsigned long long)sequenceNumber;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(void)setLocalizedStrings:(NSDictionary *)arg1 ;
-(NSDictionary *)localizedStrings;
-(NSDictionary *)iTunesPlistStrings;
-(NSDictionary *)localizedBundleNames;
-(NSDictionary *)localizedDisplayNames;
-(id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2 ;
-(NSString *)launchServicesBundleType;
-(void)setLaunchServicesBundleType:(NSString *)arg1 ;
-(NSString *)parentApplicationBundleIdentifier;
-(void)setITunesPlistStrings:(NSDictionary *)arg1 ;
-(NSDictionary *)infoPlist;
-(NARGlance *)glance;
-(void)setGlance:(NARGlance *)arg1 ;
-(NSArray *)supportedSchemes;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSString *)bundleName;
@end
