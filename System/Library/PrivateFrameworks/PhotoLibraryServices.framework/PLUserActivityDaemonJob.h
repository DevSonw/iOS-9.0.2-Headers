/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob {

	long long _actionType;
	NSString* _albumUUID;
	NSArray* _assetUUIDs;
	long long _cloudFeedContent;

}

@property (assign) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * albumUUID;                      //@synthesize albumUUID=_albumUUID - In the implementation block
@property (nonatomic,retain) NSArray * assetUUIDs;                    //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (assign,nonatomic) long long cloudFeedContent;              //@synthesize cloudFeedContent=_cloudFeedContent - In the implementation block
+(void)userDidNavigateIntoSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromSharedAlbum:(id)arg1 ;
+(void)userDidViewCloudFeedContent:(long long)arg1 ;
+(void)userDidDeleteSharedAlbum:(id)arg1 ;
+(void)userDidDeleteSharedAssets:(id)arg1 ;
+(void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromAllSharedAlbums;
+(void)userDidReadCommentOnSharedAsset:(id)arg1 ;
+(void)userDidLeavePhotosApplication;
-(NSString *)albumUUID;
-(NSArray *)assetUUIDs;
-(long long)actionType;
-(void)dealloc;
-(void)run;
-(void)setActionType:(long long)arg1 ;
-(void)setAlbumUUID:(NSString *)arg1 ;
-(void)setAssetUUIDs:(NSArray *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)setCloudFeedContent:(long long)arg1 ;
-(long long)cloudFeedContent;
@end
