/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCCloudDocsAppsObserver.h>

@protocol OS_dispatch_source, OS_dispatch_queue, BRCFileCoordinationReading, BRCFileCoordinationWriting;
@class NSMutableDictionary, BRCDeadlineScheduler, NSURL, NSObject, NSString, NSHashTable, PQLConnection, BRCServerPersistedState, NSMutableSet, BRCGlobalProgress, NSNumber, BRCAccountWaitOperation, BRCContainerScheduler, BRCApplyScheduler, BRCFSEventsMonitor, BRCFSReader, BRCFSUploader, BRCFSDownloader, BRCFSWriter, BRCUserNotification, BRCNotificationManager, BRCStageRegistry, BRCDiskSpaceReclaimer, CDSession, BRCThrottle, BRCRelativePath;

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver> {

	NSMutableDictionary* _syncContexts;
	BRCDeadlineScheduler* _defaultScheduler;
	NSURL* _dbURL;
	NSObject*<OS_dispatch_source> _dbWatcher;
	NSObject*<OS_dispatch_queue> _dbWatcherQueue;
	int _cloudDocsFD;
	/*^block*/id _dbProfilingHook;
	NSString* _databaseID;
	NSHashTable* _miscOperations;
	PQLConnection* _clientDB;
	PQLConnection* _serverDB;
	NSMutableDictionary* _clientState;
	BRCServerPersistedState* _serverState;
	NSString* _accountID;
	NSMutableSet* _xpcClients;
	BOOL _resumed;
	opaque_pthread_mutex_t _containersCreationLock;
	opaque_pthread_rwlock_t _containersLock;
	NSMutableDictionary* _serverZoneByZoneRowID;
	NSMutableDictionary* _privateLocalContainersByID;
	NSMutableDictionary* _privateServerZonesByID;
	NSMutableDictionary* _sharedLocalContainersByMangledID;
	NSMutableDictionary* _sharedServerZonesByMangledID;
	BRCGlobalProgress* _globalProgress;
	unsigned long long _lastDiskSpaceCheckTime;
	unsigned long long _availableDiskSpace;
	BOOL _isGreedy;
	br_pacer_tRef _reschedulePendingDiskItemsPacer;
	br_pacer_tRef _updateDiskSpacePacer;
	NSNumber* _accountSize;
	BOOL _accountIsReady;
	BRCAccountWaitOperation* _accountWaitOperation;
	BOOL _isCancelled;
	NSString* _appSupportDirPath;
	NSString* _cacheDirPath;
	NSString* _rootDirPath;
	NSString* _ubiquityTokenSalt;
	BRCContainerScheduler* _containerScheduler;
	BRCApplyScheduler* _applyScheduler;
	BRCFSEventsMonitor* _fsEventsMonitor;
	BRCFSReader*<BRCFileCoordinationReading> _fsReader;
	BRCFSUploader* _fsUploader;
	BRCFSDownloader* _fsDownloader;
	BRCFSWriter*<BRCFileCoordinationWriting> _fsWriter;
	BRCUserNotification* _userNotification;
	BRCNotificationManager* _notificationManager;
	BRCStageRegistry* _stageRegistry;
	BRCDiskSpaceReclaimer* _diskReclaimer;
	CDSession* _coreDuetSession;
	BRCThrottle* _containerScanThrottle;
	BRCThrottle* _containerResetThrottle;
	BRCThrottle* _aliasRemovalThrottle;
	BRCThrottle* _lostItemThrottle;
	BRCThrottle* _operationFailureThrottle;
	BRCThrottle* _syncAppContainerThrottle;

}

@property (nonatomic,readonly) NSMutableDictionary * clientState; 
@property (nonatomic,readonly) BRCServerPersistedState * serverState; 
@property (nonatomic,readonly) NSString * databaseID; 
@property (nonatomic,readonly) PQLConnection * clientDB; 
@property (nonatomic,readonly) PQLConnection * serverDB; 
@property (nonatomic,retain) NSString * appSupportDirPath;                                     //@synthesize appSupportDirPath=_appSupportDirPath - In the implementation block
@property (nonatomic,retain) NSString * cacheDirPath;                                          //@synthesize cacheDirPath=_cacheDirPath - In the implementation block
@property (nonatomic,retain) NSString * rootDirPath;                                           //@synthesize rootDirPath=_rootDirPath - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                                           //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * ubiquityTokenSalt;                                   //@synthesize ubiquityTokenSalt=_ubiquityTokenSalt - In the implementation block
@property (nonatomic,readonly) BRCGlobalProgress * globalProgress;                             //@synthesize globalProgress=_globalProgress - In the implementation block
@property (nonatomic,readonly) BRCDeadlineScheduler * defaultScheduler;                        //@synthesize defaultScheduler=_defaultScheduler - In the implementation block
@property (nonatomic,readonly) BRCApplyScheduler * applyScheduler;                             //@synthesize applyScheduler=_applyScheduler - In the implementation block
@property (nonatomic,readonly) BRCContainerScheduler * containerScheduler;                     //@synthesize containerScheduler=_containerScheduler - In the implementation block
@property (nonatomic,readonly) BRCFSEventsMonitor * fsEventsMonitor;                           //@synthesize fsEventsMonitor=_fsEventsMonitor - In the implementation block
@property (nonatomic,readonly) BRCFSReader*<BRCFileCoordinationReading> fsReader;              //@synthesize fsReader=_fsReader - In the implementation block
@property (nonatomic,readonly) BRCFSUploader * fsUploader;                                     //@synthesize fsUploader=_fsUploader - In the implementation block
@property (nonatomic,readonly) BRCFSDownloader * fsDownloader;                                 //@synthesize fsDownloader=_fsDownloader - In the implementation block
@property (nonatomic,readonly) BRCFSWriter*<BRCFileCoordinationWriting> fsWriter;              //@synthesize fsWriter=_fsWriter - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * root; 
@property (nonatomic,readonly) BRCNotificationManager * notificationManager;                   //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) BRCStageRegistry * stageRegistry;                               //@synthesize stageRegistry=_stageRegistry - In the implementation block
@property (nonatomic,readonly) BRCDiskSpaceReclaimer * diskReclaimer;                          //@synthesize diskReclaimer=_diskReclaimer - In the implementation block
@property (nonatomic,readonly) BRCUserNotification * userNotification;                         //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,readonly) CDSession * coreDuetSession;                                    //@synthesize coreDuetSession=_coreDuetSession - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                               //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) unsigned long long availableDiskSpace; 
@property (nonatomic,readonly) BOOL isGreedy; 
@property (nonatomic,readonly) BRCAccountWaitOperation * accountWaitOperation; 
@property (nonatomic,readonly) BRCThrottle * containerScanThrottle;                            //@synthesize containerScanThrottle=_containerScanThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottle * containerResetThrottle;                           //@synthesize containerResetThrottle=_containerResetThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottle * aliasRemovalThrottle;                             //@synthesize aliasRemovalThrottle=_aliasRemovalThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottle * lostItemThrottle;                                 //@synthesize lostItemThrottle=_lostItemThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottle * operationFailureThrottle;                         //@synthesize operationFailureThrottle=_operationFailureThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottle * syncAppContainerThrottle;                         //@synthesize syncAppContainerThrottle=_syncAppContainerThrottle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionForDumpingDatabasesAtURL:(id)arg1 ;
-(id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1 ;
-(id)syncContextForZone:(id)arg1 ;
-(id)sharedSyncContext;
-(id)defaultSyncContext;
-(id)syncContextForContextIdentifier:(id)arg1 isShared:(BOOL)arg2 ;
-(id)syncContextForZone:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)localContainersMatchingSearchString:(id)arg1 db:(id)arg2 error:(id*)arg3 ;
-(id)_localContainersMatchingSearchString:(id)arg1 db:(id)arg2 ;
-(id)singleLocalContainerMatchingSearchString:(id)arg1 db:(id)arg2 error:(id*)arg3 ;
-(NSString *)databaseID;
-(PQLConnection *)serverDB;
-(id)ownerKeyForName:(id)arg1 db:(id)arg2 ;
-(id)createOwnerKeyForName:(id)arg1 ;
-(id)ownerIdentityForKey:(id)arg1 ;
-(void)setupDatabase;
-(id)newConnection:(id)arg1 ;
-(BOOL)_setupConnection:(id)arg1 databaseName:(id)arg2 error:(id*)arg3 ;
-(BOOL)_attachDatabase:(id)arg1 toConnection:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createLocalContainer:(id)arg1 ownerName:(id)arg2 ;
-(id)newSharedLocalContainerFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(id)newPrivateLocalContainerFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(id)deviceKeyForName:(id)arg1 db:(id)arg2 ;
-(id)ownerIdentityForName:(id)arg1 db:(id)arg2 ;
-(void)_registerLastBootIfNeeded:(id)arg1 table:(NSObject*)arg2 ;
-(BOOL)_stepBackupDetector:(backup_detector)arg1 newState:(backup_detector*)arg2 error:(id*)arg3 ;
-(BOOL)saveLocalContainerToDB:(id)arg1 ;
-(BOOL)_checkIntegrity:(id)arg1 serverTruth:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)validateDatabase:(id)arg1 serverTruth:(BOOL)arg2 error:(id*)arg3 ;
-(void)_startWatcher;
-(BOOL)_openClientTruthConnectionWithError:(id*)arg1 ;
-(BOOL)_openServerTruthConnectionWithError:(id*)arg1 ;
-(void)enableDatabaseProfilingForDB:(id)arg1 ;
-(void)stopDBWatcher;
-(id)sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3 ;
-(id)privateServerZoneByID:(id)arg1 db:(id)arg2 ;
-(void)disableDatabaseProfilingForDB:(id)arg1 ;
-(BOOL)_dumpContainerStatus:(id)arg1 toContext:(id)arg2 error:(id*)arg3 ;
-(id)newConnectionWithLabel:(id)arg1 error:(id*)arg2 ;
-(BOOL)_dumpContainer:(id)arg1 toContext:(id)arg2 error:(id*)arg3 ;
-(PQLConnection *)clientDB;
-(BOOL)_setupBackupDetector:(backup_detector*)arg1 error:(id*)arg2 ;
-(void)preventDatabaseFromBeingReused;
-(BOOL)saveServerZoneToDB:(id)arg1 ;
-(BOOL)createServerZone:(id)arg1 ;
-(BOOL)deleteServerZone:(id)arg1 ;
-(BOOL)_deleteLocalContainer:(id)arg1 ;
-(BOOL)_createPrivateLocalContainer:(id)arg1 ;
-(BOOL)_createSharedLocalContainer:(id)arg1 ownerName:(id)arg2 ;
-(PQLResultSet*)sharedLocalContainersEnumerator:(id)arg1 ;
-(PQLResultSet*)sharedServerZonesEnumerator:(id)arg1 ;
-(PQLResultSet*)privateLocalContainersEnumerator:(id)arg1 ;
-(id)privateLocalContainerByID:(id)arg1 db:(id)arg2 ;
-(PQLResultSet*)privateServerZonesEnumerator:(id)arg1 ;
-(PQLResultSet*)stagedItemsEnumerator;
-(PQLResultSet*)bouncedItemsEnumerator;
-(PQLResultSet*)itemsNeedingIndexingEnumeratorWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2 ;
-(id)pendingDownloadItemWithDocumentID:(unsigned)arg1 ;
-(id)createDeviceKeyForNameInServerDB:(id)arg1 ;
-(id)ownerIdentityForName:(id)arg1 ;
-(void)setOwnerIdentity:(id)arg1 forName:(id)arg2 ;
-(id)ownerNameForKey:(id)arg1 db:(id)arg2 ;
-(BOOL)openDBWithError:(id*)arg1 ;
-(BOOL)closeDBWithError:(id*)arg1 ;
-(BOOL)dumpStatusToFileHandle:(id)arg1 containerID:(id)arg2 error:(id*)arg3 ;
-(BOOL)dumpDatabaseToFileHandle:(id)arg1 containerID:(id)arg2 error:(id*)arg3 ;
-(BOOL)backupDatabaseToURL:(id)arg1 error:(id*)arg2 ;
-(BRCServerPersistedState *)serverState;
-(NSMutableDictionary *)clientState;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(BOOL)isCancelled;
-(void)resume;
-(void)close;
-(BRCThrottle *)operationFailureThrottle;
-(id)createSharedContainerIfNeeded:(id)arg1 ownerName:(id)arg2 ;
-(BRCFSDownloader *)fsDownloader;
-(BRCFSUploader *)fsUploader;
-(BRCGlobalProgress *)globalProgress;
-(void)enumeratePrivateContainers:(/*^block*/id)arg1 ;
-(void)closeAndResetLocalState;
-(id)serverZoneByRowID:(id)arg1 ;
-(void)enumerateServerZones:(/*^block*/id)arg1 ;
-(BRCStageRegistry *)stageRegistry;
-(BRCNotificationManager *)notificationManager;
-(BRCContainerScheduler *)containerScheduler;
-(void)dumpXPCClientsToContext:(id)arg1 ;
-(void)dumpMiscOperationsToContext:(id)arg1 ;
-(NSString *)appSupportDirPath;
-(id)initWithAccountID:(id)arg1 salt:(id)arg2 ;
-(void)destroyLocalDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)rootDirPath;
-(BRCFSReader*<BRCFileCoordinationReading>)fsReader;
-(BRCApplyScheduler *)applyScheduler;
-(BRCFSEventsMonitor *)fsEventsMonitor;
-(void)destroyLocalData;
-(NSString *)ubiquityTokenSalt;
-(id)containerByMangledID:(id)arg1 ;
-(id)sharedContainerByMangledID:(id)arg1 ;
-(id)privateContainerByMangledID:(id)arg1 ;
-(BRCDeadlineScheduler *)defaultScheduler;
-(id)privateContainerByID:(id)arg1 ;
-(NSString *)cacheDirPath;
-(BRCDiskSpaceReclaimer *)diskReclaimer;
-(void)setAppSupportDirPath:(NSString *)arg1 ;
-(void)setCacheDirPath:(NSString *)arg1 ;
-(void)setRootDirPath:(NSString *)arg1 ;
-(BRCFSWriter*<BRCFileCoordinationWriting>)fsWriter;
-(unsigned long long)availableDiskSpace;
-(BRCThrottle *)containerResetThrottle;
-(BRCThrottle *)aliasRemovalThrottle;
-(BOOL)createPrivateContainerOnDisk:(id)arg1 createdRoot:(BOOL*)arg2 createdDocuments:(BOOL*)arg3 ;
-(BOOL)createSharedContainerOnDiskWithMangledID:(id)arg1 createdRoot:(BOOL*)arg2 ;
-(void)destroySharedContainer:(id)arg1 ;
-(void)userDefaultsChanged;
-(void)markAccountMigrationComplete;
-(BRCThrottle *)syncAppContainerThrottle;
-(BRCAccountWaitOperation *)accountWaitOperation;
-(BOOL)isGreedy;
-(id)createPrivateContainerIfNeeded:(id)arg1 ;
-(void)accountSizeDidChange;
-(BRCThrottle *)containerScanThrottle;
-(BRCThrottle *)lostItemThrottle;
-(BRCUserNotification *)userNotification;
-(void)_showiCloudDriveAppUpSellDialogIfNeeded;
-(void)enumerateSharedContainers:(/*^block*/id)arg1 ;
-(void)availableDiskSpaceDidChange;
-(void)_setupSharedPackageExtensionsPlist;
-(void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(BOOL)arg2 ;
-(void)_setupThrottles;
-(void)_loadContainersFromDisk;
-(unsigned long long)availableDiskSpaceUsingCache:(BOOL)arg1 schedulingPendingDiskItemsIfNeeded:(BOOL)arg2 ;
-(void)closeXPCClientsSync;
-(id)_loadedContainers;
-(id)_unloadContainers;
-(void)cloudDocsAppsListDidChange:(id)arg1 ;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(void)addMiscOperation:(id)arg1 ;
-(unsigned long long)availableDiskSpaceUsingCache:(BOOL)arg1 ;
-(unsigned long long)accountSize;
-(CDSession *)coreDuetSession;
-(NSString *)accountID;
-(BOOL)openWithError:(id*)arg1 ;
-(BRCRelativePath *)root;
@end

