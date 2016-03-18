/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIHTTPRequest.h>

@protocol RUIParserDelegate;
@class RUIParser, NSURL;

@interface RUILoader : RUIHTTPRequest {

	RUIParser* _parser;
	NSURL* _url;
	BOOL _allowNonSecureHTTP;
	id<RUIParserDelegate> _parserDelegate;

}

@property (assign,nonatomic) BOOL allowNonSecureHTTP;                                  //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
@property (assign,nonatomic,__weak) id<RUIParserDelegate> parserDelegate;              //@synthesize parserDelegate=_parserDelegate - In the implementation block
-(void)parseData:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)sessionConfiguration;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)URL;
-(void)loadRequest:(id)arg1 ;
-(void)loadXMLUIWithRequest:(id)arg1 ;
-(void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(id)handleWillLoadRequest:(id)arg1 ;
-(void)didParseData;
-(BOOL)allowNonSecureHTTP;
-(void)_finishLoad;
-(BOOL)anyWebViewLoading;
-(void)webViewFinishedLoading;
-(void)allWebViewsFinishedLoading;
-(void)loadXMLUIWithURL:(id)arg1 ;
-(id<RUIParserDelegate>)parserDelegate;
-(void)setParserDelegate:(id<RUIParserDelegate>)arg1 ;
@end
