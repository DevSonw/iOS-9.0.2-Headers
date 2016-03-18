/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding>

@property (copy,readonly) NSData * bitmapRepresentation; 
@property (copy,readonly) NSCharacterSet * invertedSet; 
+(id)safari_lockRelatedEmojiCharacterSet;
+(id)whitespaceNewlineAndSpecialCharacterSet;
+(id)wordBreakCharacterSet;
+(id)emojiCharacterSet;
+(id)URLUserAllowedCharacterSet;
+(id)URLPasswordAllowedCharacterSet;
+(id)URLHostAllowedCharacterSet;
+(id)URLFragmentAllowedCharacterSet;
+(id)URLPathAllowedCharacterSet;
+(id)URLQueryAllowedCharacterSet;
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
+(id)letterCharacterSet;
+(void)initialize;
+(id)whitespaceAndNewlineCharacterSet;
+(id)controlCharacterSet;
+(id)newlineCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)whitespaceCharacterSet;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)punctuationCharacterSet;
+(id)symbolCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)alphanumericCharacterSet;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(NSData *)bitmapRepresentation;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(BOOL)isMutable;
-(void)makeImmutable;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(id)_retainedBitmapRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSCharacterSet *)invertedSet;
@end
