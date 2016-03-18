/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSString* _phoneNumber;
	id _underlyingResult;

}

@property (readonly) void* underlyingResult; 
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 phoneNumber:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSRange)range;
-(id)phoneNumber;
-(unsigned long long)resultType;
@end
