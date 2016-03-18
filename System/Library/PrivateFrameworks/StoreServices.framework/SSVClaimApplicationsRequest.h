/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVClaimApplicationsRequest : SSRequest <SSXPCCoding> {

	long long _claimStyle;

}

@property (nonatomic,readonly) long long claimStyle;                //@synthesize claimStyle=_claimStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(long long)claimStyle;
-(id)initWithClaimStyle:(long long)arg1 ;
@end
