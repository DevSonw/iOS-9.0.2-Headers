/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDPoint, ODDAlgorithm, ODDShape, NSMutableArray;

@interface ODILayoutNode : NSObject {

	ODDPoint* mPoint;
	ODDAlgorithm* mAlgorithm;
	ODDShape* mShape;
	NSMutableArray* mChildren;

}
-(id)initWithLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processLayoutObjects:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processChoose:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processForEach:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processAlgorithm:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processShape:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)dealloc;
-(id)initWithLayoutNode:(id)arg1 point:(id)arg2 ;
@end
