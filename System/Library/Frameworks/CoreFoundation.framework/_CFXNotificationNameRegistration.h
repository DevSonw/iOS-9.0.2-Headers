/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationNameRegistration : _CFXNotificationRegistrationContainer {

	CFStringRef _name;

}

@property (readonly) CFStringRef name;              //@synthesize name=_name - In the implementation block
+(const SCD_Struct_CF1*)keyCallbacks;
+(Class)childClass;
-(void)find:(void*)arg1 observer:(void*)arg2 matching:(SCD_Struct_CF9*)arg3 ;
-(void)match:(void*)arg1 observer:(void*)arg2 matching:(SCD_Struct_CF9*)arg3 ;
-(id)initWithName:(CFStringRef)arg1 options:(unsigned long long)arg2 parent:(id)arg3 ;
-(id)acquireObject:(void*)arg1 ;
-(void)dealloc;
-(CFStringRef)name;
-(void*)key;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(void)finalize;
@end

