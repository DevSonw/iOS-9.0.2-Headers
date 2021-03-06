/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TIAddressBook : NSObject {

	void* _addressBook;
	NSMutableArray* _observers;

}
-(void)dealloc;
-(id)init;
-(void)addObserver:(/*^block*/id)arg1 ;
-(void)removeObserver:(/*^block*/id)arg1 ;
-(void)addressBookChanged;
-(BOOL)hasObservers;
-(void)receiveTransientObserver:(/*^block*/id)arg1 ;
@end

