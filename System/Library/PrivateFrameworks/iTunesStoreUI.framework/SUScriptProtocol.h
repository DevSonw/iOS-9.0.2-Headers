/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptURLRequest;

@interface SUScriptProtocol : SUScriptObject

@property (retain) NSArray * allowedOrientations; 
@property (readonly) NSString * clientIdentifier; 
@property (retain) NSString * copyright; 
@property (assign) BOOL excludeFromNavigationHistory; 
@property (retain) SUScriptURLRequest * overlayBackgroundURLRequest; 
@property (readonly) NSString * protocolVersion; 
@property (assign) BOOL shouldShowInOverlay; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setCopyright:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(id)attributeKeys;
-(NSString *)clientIdentifier;
-(NSArray *)allowedOrientations;
-(void)setAllowedOrientations:(NSArray *)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)copyright;
-(id)_copyProtocol;
-(void)_setProtocol:(id)arg1 ;
-(id)_webThreadValueForProtocolKey:(id)arg1 ;
-(void)_setValue:(id)arg1 forProtocolKey:(id)arg2 ;
-(void)setValuesFromDictionary:(id)arg1 ;
-(BOOL)excludeFromNavigationHistory;
-(SUScriptURLRequest *)overlayBackgroundURLRequest;
-(void)setExcludeFromNavigationHistory:(BOOL)arg1 ;
-(void)setOverlayBackgroundURLRequest:(SUScriptURLRequest *)arg1 ;
-(void)setShouldShowInOverlay:(BOOL)arg1 ;
-(BOOL)shouldShowInOverlay;
@end

