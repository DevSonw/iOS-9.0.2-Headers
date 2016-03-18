/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSCache, NSString, NSMutableArray;

@interface ICAttachmentImageLoadingOperation : NSOperation {

	NSURL* _mediaURL;
	NSCache* _cache;
	NSString* _typeUTI;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) NSCache * cache;                                  //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSString * typeUTI;                               //@synthesize typeUTI=_typeUTI - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(NSURL *)mediaURL;
-(NSCache *)cache;
-(void)main;
-(void)setCache:(NSCache *)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTypeUTI:(NSString *)arg1 ;
-(NSString *)typeUTI;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)completionHandlers;
-(id)initWithCache:(id)arg1 mediaURL:(id)arg2 typeUTI:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setMediaURL:(NSURL *)arg1 ;
@end
