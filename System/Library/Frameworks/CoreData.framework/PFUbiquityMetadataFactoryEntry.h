/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFUbiquityLocation, NSPersistentStoreCoordinator, NSPersistentStore, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject {

	PFUbiquityLocation* _metadataStoreFileLocation;
	NSPersistentStoreCoordinator* _psc;
	NSPersistentStore* _store;
	PFUbiquityMetadataFactoryFilePresenter* _filePresenter;

}

@property (nonatomic,readonly) PFUbiquityLocation * metadataStoreFileLocation;                      //@synthesize metadataStoreFileLocation=_metadataStoreFileLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityMetadataFactoryFilePresenter * filePresenter;              //@synthesize filePresenter=_filePresenter - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * psc;                                  //@synthesize psc=_psc - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                                           //@synthesize store=_store - In the implementation block
-(NSPersistentStore *)store;
-(PFUbiquityMetadataFactoryFilePresenter *)filePresenter;
-(NSPersistentStoreCoordinator *)psc;
-(PFUbiquityLocation *)metadataStoreFileLocation;
-(id)initWithMetadataStoreFileLocation:(id)arg1 ;
-(BOOL)initializePersistentStoreCoordinator:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

