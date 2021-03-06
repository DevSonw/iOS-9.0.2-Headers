/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFileUtilities : NSObject
+(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
+(id)fileManager;
+(BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1 ;
+(BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)_moveItemAtURL:(id)arg1 toURL:(id)arg2 securely:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3 ;
@end

