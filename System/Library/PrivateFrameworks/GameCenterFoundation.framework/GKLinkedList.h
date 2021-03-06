/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKListNode;

@interface GKLinkedList : NSObject {

	GKListNode* _headNode;
	GKListNode* _tailNode;

}

@property (assign,nonatomic) GKListNode * headNode;              //@synthesize headNode=_headNode - In the implementation block
@property (assign,nonatomic) GKListNode * tailNode;              //@synthesize tailNode=_tailNode - In the implementation block
-(BOOL)isConsistent;
-(BOOL)hasCycle;
-(id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)nodeForInsertionWithValue:(id)arg1 ;
-(void)insertNodeAtBeginning:(id)arg1 ;
-(GKListNode *)tailNode;
-(void)removeAllNodes;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(GKListNode *)headNode;
-(void)setHeadNode:(GKListNode *)arg1 ;
-(void)setTailNode:(GKListNode *)arg1 ;
-(void)removeNode:(id)arg1 ;
@end

