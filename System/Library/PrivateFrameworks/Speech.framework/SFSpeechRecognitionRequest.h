/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, _SFSearchRequest, NSArray, NSString;

@interface SFSpeechRecognitionRequest : NSObject {

	BOOL _shouldReportPartialResults;
	NSDictionary* _voiceTriggerEventInfo;
	_SFSearchRequest* _searchRequest;
	long long _taskHint;
	NSArray* _contextualStrings;
	NSString* _interactionIdentifier;

}

@property (assign,nonatomic) long long taskHint;                                                                                                 //@synthesize taskHint=_taskHint - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPartialResults;                                                                                    //@synthesize shouldReportPartialResults=_shouldReportPartialResults - In the implementation block
@property (nonatomic,copy) NSArray * contextualStrings;                                                                                          //@synthesize contextualStrings=_contextualStrings - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;                                                                                     //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (setter=_setVoiceTriggerEventInfo:,getter=_voiceTriggerEventInfo,nonatomic,retain) NSDictionary * _voiceTriggerEventInfo;              //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (setter=_setSearchRequest:,getter=_searchRequest,nonatomic,retain) _SFSearchRequest * _searchRequest;                                  //@synthesize searchRequest=_searchRequest - In the implementation block
-(id)init;
-(NSString *)interactionIdentifier;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(long long)taskHint;
-(BOOL)_powerMeteringAvailable;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
-(_SFSearchRequest *)_searchRequest;
-(void)setShouldReportPartialResults:(BOOL)arg1 ;
-(BOOL)automaticallyEndpoint;
-(BOOL)shouldReportPartialResults;
-(void)_setSearchRequests:(id)arg1 ;
-(id)_searchRequests;
-(id)_dictationOptionsWithTaskHint:(long long)arg1 requestIdentifier:(id)arg2 ;
-(id)_speechRequestOptions;
-(NSDictionary *)_voiceTriggerEventInfo;
-(NSArray *)contextualStrings;
-(void)_setSearchRequest:(id)arg1 ;
-(void)setContextualStrings:(NSArray *)arg1 ;
-(void)setTaskHint:(long long)arg1 ;
-(void)_setVoiceTriggerEventInfo:(id)arg1 ;
@end
