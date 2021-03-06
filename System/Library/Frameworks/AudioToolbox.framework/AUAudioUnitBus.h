/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class AVAudioFormat, NSArray, NSString, AUAudioUnit;

@interface AUAudioUnitBus : NSObject {

	AVAudioFormat* _format;
	NSArray* _supportedChannelCounts;
	unsigned _maximumChannelCount;
	BOOL _enabled;
	NSString* _name;
	unsigned long long _index;
	long long _busType;
	AUAudioUnit* _ownerAudioUnit;
	NSArray* _supportedChannelLayoutTags;
	double _contextPresentationLatency;
	vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> >* _observers;

}

@property (nonatomic,readonly) AVAudioFormat * format; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                               //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long busType;                                      //@synthesize busType=_busType - In the implementation block
@property (nonatomic,readonly) AUAudioUnit * ownerAudioUnit;                           //@synthesize ownerAudioUnit=_ownerAudioUnit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedChannelLayoutTags;              //@synthesize supportedChannelLayoutTags=_supportedChannelLayoutTags - In the implementation block
@property (assign,nonatomic) double contextPresentationLatency;                        //@synthesize contextPresentationLatency=_contextPresentationLatency - In the implementation block
@property (assign,nonatomic) vector<BusPropertyObserver observers;                     //@synthesize observers=_observers - In the implementation block
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(AUAudioUnit *)ownerAudioUnit;
-(long long)busType;
-(void)setBusType:(long long)arg1 ;
-(void)setOwnerAudioUnit:(AUAudioUnit *)arg1 ;
-(void)setMaximumChannelCount:(unsigned)arg1 ;
-(id)initWithFormat:(id)arg1 error:(id*)arg2 ;
-(void)setSupportedChannelCounts:(id)arg1 ;
-(id)supportedChannelCounts;
-(unsigned)maximumChannelCount;
-(NSArray *)supportedChannelLayoutTags;
-(double)contextPresentationLatency;
-(void)setContextPresentationLatency:(double)arg1 ;
-(AVAudioFormat *)format;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)index;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setObservers:(vector<BusPropertyObserver)arg1 ;
-(vector<BusPropertyObserver)observers;
@end

