/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFNavigationBar, NSString, _SFFluidProgressView;

@interface _SFNavigationBarItem : NSObject {

	_SFNavigationBar* _navigationBar;
	BOOL _showsLockIcon;
	BOOL _showsSearchIndicator;
	BOOL _showsStopReloadButtons;
	BOOL _stopReloadButtonShowsStop;
	BOOL _textHasEVCertificateTint;
	BOOL _lockIconHasEVCertificateTint;
	BOOL _readerButtonSelected;
	BOOL _showsReaderButton;
	BOOL _overrideBarStyleForSecurityWarning;
	NSString* _text;
	NSString* _textWhenExpanded;
	unsigned long long _startIndexOfTextInExpandedText;
	NSString* _customPlaceholderText;
	_SFFluidProgressView* _progressView;

}

@property (nonatomic,readonly) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * textWhenExpanded;                                    //@synthesize textWhenExpanded=_textWhenExpanded - In the implementation block
@property (nonatomic,readonly) unsigned long long startIndexOfTextInExpandedText;              //@synthesize startIndexOfTextInExpandedText=_startIndexOfTextInExpandedText - In the implementation block
@property (nonatomic,copy) NSString * customPlaceholderText;                                   //@synthesize customPlaceholderText=_customPlaceholderText - In the implementation block
@property (assign,nonatomic) BOOL showsLockIcon;                                               //@synthesize showsLockIcon=_showsLockIcon - In the implementation block
@property (assign,nonatomic) BOOL showsSearchIndicator;                                        //@synthesize showsSearchIndicator=_showsSearchIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsStopReloadButtons;                                      //@synthesize showsStopReloadButtons=_showsStopReloadButtons - In the implementation block
@property (assign,nonatomic) BOOL stopReloadButtonShowsStop;                                   //@synthesize stopReloadButtonShowsStop=_stopReloadButtonShowsStop - In the implementation block
@property (assign,nonatomic) BOOL textHasEVCertificateTint;                                    //@synthesize textHasEVCertificateTint=_textHasEVCertificateTint - In the implementation block
@property (assign,nonatomic) BOOL lockIconHasEVCertificateTint;                                //@synthesize lockIconHasEVCertificateTint=_lockIconHasEVCertificateTint - In the implementation block
@property (assign,nonatomic) BOOL readerButtonSelected;                                        //@synthesize readerButtonSelected=_readerButtonSelected - In the implementation block
@property (assign,nonatomic) BOOL showsReaderButton;                                           //@synthesize showsReaderButton=_showsReaderButton - In the implementation block
@property (assign,nonatomic) BOOL overrideBarStyleForSecurityWarning;                          //@synthesize overrideBarStyleForSecurityWarning=_overrideBarStyleForSecurityWarning - In the implementation block
@property (nonatomic,retain) _SFFluidProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
-(BOOL)overrideBarStyleForSecurityWarning;
-(BOOL)showsStopReloadButtons;
-(BOOL)readerButtonSelected;
-(BOOL)stopReloadButtonShowsStop;
-(BOOL)showsReaderButton;
-(NSString *)textWhenExpanded;
-(unsigned long long)startIndexOfTextInExpandedText;
-(BOOL)showsLockIcon;
-(BOOL)showsSearchIndicator;
-(BOOL)textHasEVCertificateTint;
-(BOOL)lockIconHasEVCertificateTint;
-(NSString *)customPlaceholderText;
-(void)setText:(id)arg1 textWhenExpanded:(id)arg2 startIndex:(unsigned long long)arg3 ;
-(void)setShowsLockIcon:(BOOL)arg1 ;
-(void)setShowsSearchIndicator:(BOOL)arg1 ;
-(void)setShowsStopReloadButtons:(BOOL)arg1 ;
-(void)setStopReloadButtonShowsStop:(BOOL)arg1 ;
-(void)setReaderButtonSelected:(BOOL)arg1 ;
-(void)setOverrideBarStyleForSecurityWarning:(BOOL)arg1 ;
-(void)setTextHasEVCertificateTint:(BOOL)arg1 ;
-(void)setLockIconHasEVCertificateTint:(BOOL)arg1 ;
-(void)setShowsReaderButton:(BOOL)arg1 ;
-(void)setCustomPlaceholderText:(NSString *)arg1 ;
-(id)init;
-(NSString *)text;
-(void)setProgressView:(_SFFluidProgressView *)arg1 ;
-(_SFFluidProgressView *)progressView;
-(void)_setNavigationBar:(id)arg1 ;
@end

