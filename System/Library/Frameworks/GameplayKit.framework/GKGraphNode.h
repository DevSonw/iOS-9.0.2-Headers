/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@class NSMutableArray, NSArray;

@interface GKGraphNode : NSObject {

	NSMutableArray* _connectedNodes;
	GKCGraphNode* _cGraphNode;

}

@property (nonatomic,readonly) NSArray * connectedNodes; 
+(id)node;
-(NSArray *)connectedNodes;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGraphNode*)cGraphNode;
-(id)findPathToNode:(id)arg1 ;
-(GKCGraphNode*)makeCGraphNode;
-(id)findPathFromNode:(id)arg1 ;
-(id)mutConnectedNodes;
-(void)addConnection:(id)arg1 bidirectional:(BOOL)arg2 ;
-(void)addConnectionsToNodes:(id)arg1 bidirectional:(BOOL)arg2 ;
-(void)removeConnectionsToNodes:(id)arg1 bidirectional:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeConnection:(id)arg1 ;
@end
