/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding> {

	long long _alternativeSelectionCount;
	long long _characterModificationCount;
	NSString* _correctedText;

}

@property (assign,nonatomic) long long alternativeSelectionCount;               //@synthesize alternativeSelectionCount=_alternativeSelectionCount - In the implementation block
@property (assign,nonatomic) long long characterModificationCount;              //@synthesize characterModificationCount=_characterModificationCount - In the implementation block
@property (nonatomic,copy) NSString * correctedText;                            //@synthesize correctedText=_correctedText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlternativeSelectionCount:(long long)arg1 ;
-(void)setCharacterModificationCount:(long long)arg1 ;
-(void)setCorrectedText:(NSString *)arg1 ;
-(long long)alternativeSelectionCount;
-(long long)characterModificationCount;
-(NSString *)correctedText;
@end
