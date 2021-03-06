/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudService.h>

@class PLPhotoLibrary, PLCloudOperationQueue, PLCloudPhotoLibraryManager;

@interface PLCloudDownloadService : PLCloudService {

	PLPhotoLibrary* _localLibrary;
	PLCloudOperationQueue* _downloadQueue;
	PLCloudPhotoLibraryManager* _remoteLibrary;

}
-(void)dealloc;
-(void)activate;
-(void)systemStarted:(id)arg1 ;
-(void)resetQueue;
-(BOOL)queue:(id)arg1 shouldRetryOperation:(id)arg2 forError:(id)arg3 ;
-(void)queue:(id)arg1 startedExecutingOperation:(id)arg2 ;
-(void)queue:(id)arg1 successfullyCompletedOperation:(id)arg2 remainingInPreferenceClass:(unsigned long long)arg3 ;
-(void)queue:(id)arg1 failedOperation:(id)arg2 withError:(id)arg3 ;
-(void)queue:(id)arg1 unrecoverablyFailedOperation:(id)arg2 withError:(id)arg3 remainingInPreferenceClass:(unsigned long long)arg4 ;
-(void)queue:(id)arg1 addedOperation:(id)arg2 inPreferenceClass:(id)arg3 newPreferenceClassTotal:(unsigned long long)arg4 ;
-(void)queue:(id)arg1 didProgress:(float)arg2 forOperation:(id)arg3 ;
-(void)completedAllOperationsInQueue:(id)arg1 ;
-(void)resumeTransfers;
-(void)resourceRequested:(id)arg1 ;
-(void)cancelDownload:(id)arg1 ;
@end

