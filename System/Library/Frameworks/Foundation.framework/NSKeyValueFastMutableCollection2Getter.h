/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueMutatingCollectionMethodSet;

@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {

	NSKeyValueGetter* _baseGetter;
	NSKeyValueMutatingCollectionMethodSet* _mutatingMethods;

}
-(id)mutatingMethods;
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5 ;
-(id)baseGetter;
-(void)dealloc;
@end

