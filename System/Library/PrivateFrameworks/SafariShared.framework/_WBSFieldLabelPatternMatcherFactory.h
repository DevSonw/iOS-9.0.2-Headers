/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject {

	NSMutableDictionary* _trie;

}
+(WBSFieldLabelPatternMatcherArrayRef)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(BOOL)arg2 ;
-(id)init;
-(void)_addWord:(id)arg1 allowingEndOfWordMatch:(BOOL)arg2 ;
@end

