/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNVCardPropertyItem : NSObject {

	id _value;
	NSString* _label;
	NSString* _identifier;

}

@property (readonly) id value;                           //@synthesize value=_value - In the implementation block
@property (readonly) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)itemWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(id)value;
-(NSString *)label;
-(id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
@end
