/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerRange : NSManagedObject

@property (nonatomic,retain) NSNumber * peerStart; 
@property (nonatomic,retain) NSNumber * end; 
@property (nonatomic,retain) NSNumber * peerEnd; 
@property (nonatomic,retain) NSString * peerEntityName; 
@property (nonatomic,retain) NSNumber * start; 
@property (nonatomic,retain) PFUbiquityPeer * peer; 
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata; 
-(void)loadFromBaselineDictionary:(id)arg1 ;
@end
