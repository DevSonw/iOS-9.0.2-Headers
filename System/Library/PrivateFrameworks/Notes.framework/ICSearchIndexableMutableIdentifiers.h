/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Notes/ICSearchIndexableIdentifiers.h>

@interface ICSearchIndexableMutableIdentifiers : ICSearchIndexableIdentifiers
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addSearchIndexableIdentifier:(id)arg1 ;
-(void)unionIdentifiers:(id)arg1 ;
-(void)minusIdentifiers:(id)arg1 ;
-(void)removeSearchIndexableIdentifierAtIndex:(unsigned long long)arg1 ;
-(void)removeSearchIndexableIdentifier:(id)arg1 ;
-(id)mutableIdentifiers;
-(id)initWithOrderedSet:(id)arg1 ;
@end

