/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearchProvider.h>

@protocol CNFuture;
@class NSString;

@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {

	id<CNFuture> _localSearchFuture;
	id<CNFuture> _recentsSearchFuture;
	id<CNFuture> _suggestionsSearchFuture;
	id<CNFuture> _duetSearchFuture;
	id<CNFuture> _directoryServerSearchFuture;
	id<CNFuture> _calendarServerSearchFuture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localSearch;
-(id)initWithSearchProvider:(id)arg1 ;
-(id)recentsSearch;
-(id)suggestionsSearch;
-(id)duetSearch;
-(id)directoryServerSearch;
-(id)calendarServerSearch;
@end

