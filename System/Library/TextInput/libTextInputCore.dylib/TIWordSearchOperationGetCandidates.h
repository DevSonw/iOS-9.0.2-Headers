/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class NSString, TIWordSearchCandidateResultSet, NSArray, TIWordSearch;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {

	BOOL _predictionEnabled;
	BOOL _reanalysisMode;
	NSString* _inputString;
	TIWordSearchCandidateResultSet* _results;
	id _target;
	NSArray* _geometryModelData;
	SEL _action;
	TIWordSearch* _wordSearch;
	unsigned long long _autocapitalizationType;
	NSArray* _candidateContext;
	NSString* _stringContext;

}

@property (nonatomic,readonly) NSString * inputString;                                 //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * results;                 //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) id target;                                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL predictionEnabled;                                 //@synthesize predictionEnabled=_predictionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL reanalysisMode;                                    //@synthesize reanalysisMode=_reanalysisMode - In the implementation block
@property (nonatomic,readonly) unsigned long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) NSArray * geometryModelData;                            //@synthesize geometryModelData=_geometryModelData - In the implementation block
@property (nonatomic,readonly) NSArray * candidateContext;                             //@synthesize candidateContext=_candidateContext - In the implementation block
@property (nonatomic,readonly) NSString * stringContext;                               //@synthesize stringContext=_stringContext - In the implementation block
@property (retain) TIWordSearch * wordSearch;                                          //@synthesize wordSearch=_wordSearch - In the implementation block
-(void)dealloc;
-(SEL)action;
-(id)target;
-(unsigned long long)autocapitalizationType;
-(NSString *)inputString;
-(void)perform;
-(TIWordSearchCandidateResultSet *)results;
-(void)setResults:(TIWordSearchCandidateResultSet *)arg1 ;
-(TIWordSearch *)wordSearch;
-(NSString *)stringContext;
-(NSArray *)candidateContext;
-(void)setWordSearch:(TIWordSearch *)arg1 ;
-(BOOL)predictionEnabled;
-(NSArray *)geometryModelData;
-(void)completeSearchOnMainThreadWithResults:(id)arg1 ;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(BOOL)arg3 reanalysisMode:(BOOL)arg4 autocapitalizationType:(unsigned long long)arg5 target:(id)arg6 action:(SEL)arg7 geometryModelData:(id)arg8 candidateContext:(id)arg9 stringContext:(id)arg10 ;
-(BOOL)reanalysisMode;
-(void)checkForCachedResults;
@end

