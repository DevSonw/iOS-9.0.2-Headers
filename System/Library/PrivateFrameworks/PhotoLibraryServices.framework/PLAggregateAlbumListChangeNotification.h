/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList, PLAssetContainerListChangeNotification;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLAggregateAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _note;
	unsigned long long _indexOffet;

}
+(id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(id)insertedIndexes;
-(NSObject*)albumList;
-(id)changedObjects;
-(id)changedIndexes;
-(BOOL)shouldReload;
-(id)deletedIndexes;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)object;
-(id)insertedObjects;
-(id)deletedObjects;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)changedIndexesRelativeToSnapshot;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
@end
