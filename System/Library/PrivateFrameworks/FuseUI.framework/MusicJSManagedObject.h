/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppContext, JSManagedValue;

@interface MusicJSManagedObject : NSObject {

	IKAppContext* _appContext;
	JSManagedValue* _managedValue;
	id _object;
	id _owner;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@property (nonatomic,readonly) id object; 
@property (nonatomic,__weak,readonly) id owner; 
-(void)dealloc;
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 owner:(id)arg2 appContext:(id)arg3 ;
-(id)owner;
-(IKAppContext *)appContext;
@end

