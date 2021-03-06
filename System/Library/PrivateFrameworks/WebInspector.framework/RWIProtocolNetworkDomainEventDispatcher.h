/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolNetworkDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)requestWillBeSentWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 request:(id)arg5 timestamp:(double)arg6 initiator:(id)arg7 redirectResponse:(id*)arg8 type:(long long*)arg9 ;
-(void)requestServedFromCacheWithRequestId:(id)arg1 ;
-(void)responseReceivedWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 timestamp:(double)arg4 type:(long long)arg5 response:(id)arg6 ;
-(void)dataReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 dataLength:(int)arg3 encodedDataLength:(int)arg4 ;
-(void)loadingFinishedWithRequestId:(id)arg1 timestamp:(double)arg2 sourceMapURL:(id*)arg3 ;
-(void)loadingFailedWithRequestId:(id)arg1 timestamp:(double)arg2 errorText:(id)arg3 canceled:(BOOL*)arg4 ;
-(void)requestServedFromMemoryCacheWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 timestamp:(double)arg5 initiator:(id)arg6 resource:(id)arg7 ;
-(void)webSocketWillSendHandshakeRequestWithRequestId:(id)arg1 timestamp:(double)arg2 request:(id)arg3 ;
-(void)webSocketHandshakeResponseReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3 ;
-(void)webSocketCreatedWithRequestId:(id)arg1 url:(id)arg2 ;
-(void)webSocketClosedWithRequestId:(id)arg1 timestamp:(double)arg2 ;
-(void)webSocketFrameReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3 ;
-(void)webSocketFrameErrorWithRequestId:(id)arg1 timestamp:(double)arg2 errorMessage:(id)arg3 ;
-(void)webSocketFrameSentWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3 ;
@end

