/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchConnectivity/WCMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface WCMessageResponse : WCMessage <NSSecureCoding> {

	NSError* _error;

}

@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setError:(NSError *)arg1 ;
@end

