/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SUICPluginBundle : NSObject {

	Class _factoryClass;
	id _factoryInstance;
	NSMutableDictionary* _classIdentifiers;

}

@property (nonatomic,retain) Class factoryClass;                                  //@synthesize factoryClass=_factoryClass - In the implementation block
@property (nonatomic,retain) id factoryInstance;                                  //@synthesize factoryInstance=_factoryInstance - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * classIdentifiers;              //@synthesize classIdentifiers=_classIdentifiers - In the implementation block
-(id)init;
-(NSMutableDictionary *)classIdentifiers;
-(void)registerClassIdentifier:(id)arg1 forDomain:(id)arg2 inGroup:(id)arg3 ;
-(BOOL)supportsClassIdentifier:(id)arg1 forDomainKey:(id)arg2 groupIdentifier:(id)arg3 ;
-(Class)factoryClass;
-(void)setFactoryClass:(Class)arg1 ;
-(id)factoryInstance;
-(void)setFactoryInstance:(id)arg1 ;
-(void)setClassIdentifiers:(NSMutableDictionary *)arg1 ;
@end

