/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSJoin : NSObject <NSCoding, NSCopying> {

	NSString* _sourceAttributeName;
	NSString* _destinationAttributeName;

}
+(id)joinWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2 ;
-(id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2 ;
-(id)sourceAttributeName;
-(id)destinationAttributeName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

