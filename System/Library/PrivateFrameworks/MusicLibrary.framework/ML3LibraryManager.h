/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3MusicLibrary;

@interface ML3LibraryManager : NSObject {

	ML3MusicLibrary* _currentLibrary;

}

@property (nonatomic,retain) ML3MusicLibrary * currentLibrary; 
+(id)sharedManager;
-(void)_setupNotifications;
-(void)_teardownNotifications;
-(void)dealloc;
-(id)init;
-(ML3MusicLibrary *)currentLibrary;
-(void)_switchToLibrary:(id)arg1 ;
-(void)_deviceSharedLibraryDidChangeDistributedNotification:(id)arg1 ;
-(void)setCurrentLibrary:(ML3MusicLibrary *)arg1 ;
-(id)libraryForAccount:(id)arg1 ;
-(id)pathToLibraryForAccount:(id)arg1 ;
@end
