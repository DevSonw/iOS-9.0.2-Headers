/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RMSServiceProvider <NSObject>
@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)beginDiscovery;
-(void)endDiscovery;

@end
