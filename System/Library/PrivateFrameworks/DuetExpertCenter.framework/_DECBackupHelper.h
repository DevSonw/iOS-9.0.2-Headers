/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, _DKDataProtectionStateMonitor;

@interface _DECBackupHelper : NSObject {

	NSFileManager* _fm;
	_DKDataProtectionStateMonitor* _dataProtection;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isClassCLocked;
-(BOOL)canBackup;
-(BOOL)backupNewerThanCurrentState;
-(BOOL)markRestoreAsNotDone;
-(BOOL)finishBackup;
-(BOOL)canRestore;
-(BOOL)restoredAlready;
-(BOOL)restoreStart;
-(BOOL)restoreDone;
-(id)backupPathForExpert:(id)arg1 ;
-(id)restorePathForExpert:(id)arg1 ;
-(BOOL)createBackupDirectoriesIfMissing;
-(BOOL)probePathAt:(id)arg1 ;
-(id)_currentBackupVersionPath;
-(BOOL)markVersionOfBackupDirectoryAsCurrent;
@end

