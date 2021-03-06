/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, XPCClientDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSDictionary, NSRecursiveLock;

@interface XPCClient : NSObject {

	int _state;
	NSString* _machName;
	NSObject*<OS_xpc_object> _connection;
	id<XPCClientDelegate> _delegate;
	NSString* _type;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _options;
	NSRecursiveLock* _delegateLock;

}

@property (assign,nonatomic) int state;                                          //@synthesize state=_state - In the implementation block
@property (copy) NSString * machName;                                            //@synthesize machName=_machName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;                //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<XPCClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * type;                                                //@synthesize type=_type - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (copy) NSDictionary * options;                                         //@synthesize options=_options - In the implementation block
@property (retain) NSRecursiveLock * delegateLock;                               //@synthesize delegateLock=_delegateLock - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<XPCClientDelegate>)arg1 ;
-(void)dealloc;
-(id<XPCClientDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)handleEvent:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)closeConnection;
-(void)postEvent:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 type:(id)arg2 queue:(id)arg3 machName:(id)arg4 ;
-(NSString *)machName;
-(id)initWithDelegate:(id)arg1 type:(id)arg2 queue:(id)arg3 ;
-(void)startConnectionWithType:(id)arg1 queue:(id)arg2 machName:(id)arg3 options:(id)arg4 ;
-(id)initWithDelegate:(id)arg1 type:(id)arg2 queue:(id)arg3 machName:(id)arg4 options:(id)arg5 ;
-(void)setMachName:(NSString *)arg1 ;
-(NSRecursiveLock *)delegateLock;
-(void)setDelegateLock:(NSRecursiveLock *)arg1 ;
@end

