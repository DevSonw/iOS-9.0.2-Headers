/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, ATMessageLink, NSString;

@interface ATMessageLinkProxyListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	ATMessageLink* _messageLink;

}

@property (nonatomic,retain) ATMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stop;
-(void)start;
-(id)endpoint;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(ATMessageLink *)messageLink;
-(void)setMessageLink:(ATMessageLink *)arg1 ;
-(id)initWithMessageLink:(id)arg1 ;
@end
