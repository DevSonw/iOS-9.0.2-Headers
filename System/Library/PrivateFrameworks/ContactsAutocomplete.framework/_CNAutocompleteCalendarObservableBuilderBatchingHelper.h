/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteObservableBuilderBatchingHelper.h>

@class _CNAutocompleteObservableBuilderBatchingHelper, NSString;

@interface _CNAutocompleteCalendarObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper> {

	_CNAutocompleteObservableBuilderBatchingHelper* _helper;

}

@property (nonatomic,retain) _CNAutocompleteObservableBuilderBatchingHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_CNAutocompleteObservableBuilderBatchingHelper *)helper;
-(void)setHelper:(_CNAutocompleteObservableBuilderBatchingHelper *)arg1 ;
-(id)init;
-(BOOL)batchAtIndexIncludesServer:(unsigned long long)arg1 ;
-(id)batchedObservables;
-(void)addContactsObservable:(id)arg1 ;
-(void)addCoreRecentsObservable:(id)arg1 ;
-(void)addSuggestionsObservable:(id)arg1 ;
-(void)addDuetObservable:(id)arg1 ;
-(void)addSupplementalObservable:(id)arg1 ;
-(void)addDirectoryServerObservable:(id)arg1 ;
-(void)addCalendarServerObservable:(id)arg1 ;
@end

