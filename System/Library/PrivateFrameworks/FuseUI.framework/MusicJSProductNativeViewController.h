/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicJSNativeViewController.h>
#import <libobjc.A.dylib/MusicJSProductNativeViewController.h>

@protocol MusicJSProductNativeViewController <JSExport,MusicJSNativeViewController>
@required
-(void)presentShareDocument:(id)arg1 :(id)arg2;
-(void)setRelatedContentDocument:(id)arg1 :(id)arg2;
-(void)setReportingInformation:(id)arg1;
-(void)setProductEntityValueProvider:(id)arg1;
-(void)setNumberOfLikes:(unsigned long long)arg1;
-(void)setTracklistItems:(id)arg1;
-(void)setUberParameters:(id)arg1;

@end

#import <libobjc.A.dylib/SKUIDOMFeature.h>

@protocol MusicJSProductNativeViewControllerDelegate;
@class IKDOMDocument, IKAppDocument, NSDictionary, NSArray, IKJSNavigationDocument, NSString, IKAppContext;

@interface MusicJSProductNativeViewController : MusicJSNativeViewController <MusicJSProductNativeViewController, SKUIDOMFeature> {

	IKDOMDocument* _relatedContentJSDocument;
	IKAppDocument* _shareDocument;
	NSDictionary* _shareDocumentOptions;
	id<MusicJSProductNativeViewControllerDelegate> _delegate;
	NSDictionary* _productEntityValueProviderData;
	NSDictionary* _reportingInformation;
	IKAppDocument* _relatedContentDocument;
	NSDictionary* _relatedContentDocumentOptions;
	NSArray* _tracklistItems;

}

@property (assign,nonatomic,__weak) id<MusicJSProductNativeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * productEntityValueProviderData;                             //@synthesize productEntityValueProviderData=_productEntityValueProviderData - In the implementation block
@property (nonatomic,readonly) NSDictionary * reportingInformation;                                       //@synthesize reportingInformation=_reportingInformation - In the implementation block
@property (nonatomic,readonly) IKAppDocument * relatedContentDocument;                                    //@synthesize relatedContentDocument=_relatedContentDocument - In the implementation block
@property (nonatomic,readonly) NSDictionary * relatedContentDocumentOptions;                              //@synthesize relatedContentDocumentOptions=_relatedContentDocumentOptions - In the implementation block
@property (nonatomic,readonly) NSArray * tracklistItems;                                                  //@synthesize tracklistItems=_tracklistItems - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName; 
@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
+(id)featureName;
-(void)setDelegate:(id<MusicJSProductNativeViewControllerDelegate>)arg1 ;
-(id<MusicJSProductNativeViewControllerDelegate>)delegate;
-(id)nativeViewIdentifier;
-(void)navigationDocumentDidChange;
-(NSDictionary *)productEntityValueProviderData;
-(NSArray *)tracklistItems;
-(IKAppDocument *)relatedContentDocument;
-(NSDictionary *)relatedContentDocumentOptions;
-(NSDictionary *)reportingInformation;
-(void)presentShareDocument:(id)arg1 :(id)arg2 ;
-(void)setRelatedContentDocument:(id)arg1 :(id)arg2 ;
-(void)setReportingInformation:(NSDictionary *)arg1 ;
-(void)setProductEntityValueProvider:(id)arg1 ;
-(void)setNumberOfLikes:(unsigned long long)arg1 ;
-(void)setTracklistItems:(NSArray *)arg1 ;
-(void)setUberParameters:(id)arg1 ;
@end

