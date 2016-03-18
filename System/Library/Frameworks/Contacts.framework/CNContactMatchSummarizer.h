/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNContactMatchSummarizer : NSObject {

	void* _tokenList;
	CFStringTokenizerRef _tokenizer;

}
+(id)summaryProperties;
+(id)summaryPropertyForMatchInfo:(id)arg1 ;
+(id)keyDescriptorForContactIdentifiers:(id)arg1 matchInfos:(id)arg2 ;
-(id)attributedStringForPropertyValueString:(id)arg1 queryTerms:(id)arg2 outMatchCount:(unsigned long long*)arg3 ;
-(id)summaryForContact:(id)arg1 matchInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
