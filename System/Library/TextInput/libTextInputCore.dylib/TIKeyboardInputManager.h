/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerBase.h>

@class TIKeyboardLayout, TIKeyboardLayoutState, TIKeyboardInputManagerState, TIKeyboardState;

@interface TIKeyboardInputManager : TIKeyboardInputManagerBase {

	TIKeyboardLayout* _keyLayout;
	TIKeyboardLayoutState* _layoutState;
	TIKeyboardInputManagerState* _currentState;
	TIKeyboardState* _keyboardState;
	unsigned long long _maxCandidateCount;
	/*^block*/id _candidateGenerationCompletionHandler;
	NSRange _candidateRange;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                           //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,readonly) TIKeyboardInputManagerState * currentState; 
@property (assign,nonatomic) unsigned long long maxCandidateCount;                      //@synthesize maxCandidateCount=_maxCandidateCount - In the implementation block
@property (assign,nonatomic) NSRange candidateRange;                                    //@synthesize candidateRange=_candidateRange - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout; 
@property (nonatomic,copy) id candidateGenerationCompletionHandler;                     //@synthesize candidateGenerationCompletionHandler=_candidateGenerationCompletionHandler - In the implementation block
+(void)resetResponseKit;
+(void)removeAllDynamicDictionaries;
+(void)clearRecentsFileForIdentifier:(id)arg1 ;
+(id)recentsFilePathForIdentifier:(id)arg1 ;
+(id)keyboardUserDirectory;
+(id)userDictionaryWordKeyPairsFilePath;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
+(id)dynamicDictionaryFilePathForInputMode:(id)arg1 ;
-(void)addSynthesizedTouchToInput:(id)arg1 ;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(unsigned long long)maximumShortcutLengthAllowed;
-(id)shortcutCompletionsForDocumentState:(id)arg1 ;
-(id)shortcutConversionForDocumentState:(id)arg1 ;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(long long)keyHitTest:(id)arg1 ;
-(void)registerKeyArea:(CGRect)arg1 keyCode:(short)arg2 keyString:(const char*)arg3 ;
-(void)clearKeyAreas;
-(id)keyEventMap;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(void)clearDynamicDictionary;
-(void)releaseDynamicLanguageModel;
-(void)setAutocapitalizationType:(unsigned long long)arg1 ;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(BOOL)shouldExtendPriorWord;
-(void)setAutocapitalizationEnabled:(BOOL)arg1 ;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)setKeyboardEventsLagging:(BOOL)arg1 ;
-(BOOL)ignoresDeadKeys;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(id)candidates;
-(BOOL)usesCandidateSelection;
-(unsigned long long)initialSelectedIndex;
-(BOOL)supportsNumberKeySelection;
-(id)autocorrection;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(id)searchStringForMarkedText;
-(BOOL)nextInputWouldStartSentence;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(id)replacementForDoubleSpace;
-(id)wordSeparator;
-(unsigned long long)phraseBoundary;
-(id)shadowTyping;
-(BOOL)commitsAcceptedCandidate;
-(id)defaultCandidate;
-(unsigned long long)initialCandidateBatchCount;
-(BOOL)suppressPlaceholderCandidate;
-(id)autocorrectionList;
-(id)terminatorsPreventingAutocorrection;
-(id)terminatorsDeletingAutospace;
-(id)terminatorsPrecedingAutospace;
-(id)candidatesForString:(id)arg1 ;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(id)sortingMethods;
-(id)titleForSortingMethod:(id)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
-(void)dealloc;
-(void)suspend;
-(TIKeyboardInputManagerState *)currentState;
-(id)keyboardBehaviors;
-(void)resume;
-(id)candidateResultSet;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)clearInput;
-(id)markedText;
-(id)inputString;
-(unsigned)inputIndex;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(BOOL)shouldSkipCandidateSelection;
-(BOOL)acceptInputString:(id)arg1 ;
-(BOOL)stringEndsWord:(id)arg1 ;
-(unsigned)inputCount;
-(void)lastAcceptedCandidateCorrected;
-(void)setOriginalInput:(id)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(void)incrementUsageTrackingKeysForDeleteFromInput;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)wordCharacters;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(BOOL)hasLegacyInputString;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(void)trimInput;
-(void)acceptInput;
-(void)willChangeToKeyboardState:(id)arg1 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(BOOL)hasLegacyInputStem;
-(void)dropInput;
-(void)setInputStringFromDocumentState:(id)arg1 ;
-(id)inputContext;
-(id)internalInputContext;
-(void)refreshInputManagerState;
-(id)revisionHistory;
-(void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg1 autocorrectionTypes:(unsigned)arg2 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 ;
-(long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(id)keyboardConfiguration;
-(id)generateAutocorrectionsWithKeyboardState:(id)arg1 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 ;
-(id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 ;
-(void)acceptCurrentCandidateIfSelectedWithContext:(id)arg1 ;
-(void)inputLocationChanged;
-(id)newInputManagerState;
-(id)keyboardConfigurationLayoutTag;
-(void)setCandidateGenerationCompletionHandler:(id)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)rawInputString;
-(id)sortMethodsGroupsForCandidates:(id)arg1 ;
-(id)suffixOfDesiredString:(id)arg1 toAppendToInputString:(id)arg2 withInputIndex:(unsigned long long)arg3 afterDeletionCount:(unsigned long long*)arg4 ;
-(void)setMarkedText;
-(id)sortMethodIndexes;
-(unsigned long long)maxCandidateCount;
-(id)usageTrackingKeyForStatistic:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)candidateResultSetFromCandidates:(id)arg1 ;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)acceptCurrentCandidateWithContext:(id)arg1 ;
-(id)didAcceptCandidate:(id)arg1 ;
-(id)deletedSuffixOfInputContext:(id)arg1 whenDeletingFromInputString:(id)arg2 withInputIndex:(unsigned long long)arg3 deletionCount:(unsigned long long)arg4 ;
-(void)syncInputStringToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)setPhraseBoundaryIfNecessary;
-(id)sortMethodTitles;
-(id)sortMethodsShowExtensionCandidates;
-(id)remainingInput;
-(id)candidateGenerationCompletionHandler;
-(void)setMaxCandidateCount:(unsigned long long)arg1 ;
-(id)contextBeforeWithDesiredLength:(unsigned long long)arg1 ;
-(BOOL)keyboardConfigurationAssertDefaultKeyPlane;
-(id)inputsToReject;
-(void)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)clearInputContext;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)removeSuffixOfInputContext:(id)arg1 ;
-(id)keyboardConfigurationAccentKeyString;
-(TIKeyboardState *)keyboardState;
-(BOOL)shouldCommitInputString;
-(void)appendToInputContext:(id)arg1 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)setCandidateRange:(NSRange)arg1 ;
-(NSRange)candidateRange;
-(id)inputStringFromDocumentState:(id)arg1 ;
@end

