/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject {

	MPMediaPlaylist* _assetSyncPlaylist;

}

@property (nonatomic,retain) MPMediaPlaylist * assetSyncPlaylist;              //@synthesize assetSyncPlaylist=_assetSyncPlaylist - In the implementation block
-(void)dealloc;
-(id)init;
-(MPMediaPlaylist *)assetSyncPlaylist;
-(void)setAssetSyncPlaylist:(MPMediaPlaylist *)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
@end
