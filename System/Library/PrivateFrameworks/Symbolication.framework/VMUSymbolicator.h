/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUSymbolicator : NSObject {

	CSTypeRef _symbolicator;

}
+(id)symbolicatorForTask:(unsigned)arg1 ;
+(id)symbolicatorForPid:(int)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(void)dealloc;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(id)symbolForAddress:(unsigned long long)arg1 ;
@end

