/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, SKUIStoreIdentifier;

@interface SKUILibraryItem : NSObject <NSCopying> {

	NSString* _storeFlavorIdentifier;
	NSNumber* _storeItemIdentifier;
	SKUIStoreIdentifier* _storeIdentifer;
	SKUIStoreIdentifier* _storeIdentifier;

}

@property (nonatomic,copy) SKUIStoreIdentifier * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;                     //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeFlavorIdentifier;                   //@synthesize storeFlavorIdentifier=_storeFlavorIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKUIStoreIdentifier *)storeIdentifier;
-(void)setStoreIdentifier:(SKUIStoreIdentifier *)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)storeFlavorIdentifier;
-(void)setStoreFlavorIdentifier:(NSString *)arg1 ;
@end
