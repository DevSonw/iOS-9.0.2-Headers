/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MSCLAccountStore, NSArray, SKUIMediaSocialAuthor, SKUIClientContext, MSCLStoreItem, NSString;

@interface MSCLPreparePostDescriptionOperation : NSOperation {

	MSCLAccountStore* _accountStore;
	NSArray* _attachments;
	BOOL _attributed;
	SKUIMediaSocialAuthor* _author;
	SKUIClientContext* _clientContext;
	MSCLStoreItem* _contentItem;
	NSArray* _enabledExternalServices;
	/*^block*/id _outputBlock;
	NSString* _text;

}

@property (nonatomic,retain) MSCLAccountStore * accountStore;                  //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                              //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) SKUIMediaSocialAuthor * author;                     //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) MSCLStoreItem * contentItem;                        //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,copy) NSArray * enabledExternalServices;                  //@synthesize enabledExternalServices=_enabledExternalServices - In the implementation block
@property (assign,getter=isAttributed,nonatomic) BOOL attributed;              //@synthesize attributed=_attributed - In the implementation block
@property (nonatomic,copy) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) id outputBlock;                                     //@synthesize outputBlock=_outputBlock - In the implementation block
-(void)setAccountStore:(MSCLAccountStore *)arg1 ;
-(MSCLAccountStore *)accountStore;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)main;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)_defaultTruncatedText;
-(id)_copyFinalizedAttachmentWithAttachment:(id)arg1 error:(id*)arg2 ;
-(id)_defaultTitleWithAttachment:(id)arg1 ;
-(id)_refreshTokensForAuthor:(id)arg1 externalServices:(id)arg2 error:(id*)arg3 ;
-(id)_URLByResolvingImageAssetURL:(id)arg1 UTI:(id*)arg2 error:(id*)arg3 ;
-(id)_URLByResolvingVideoAssetURL:(id)arg1 UTI:(id*)arg2 error:(id*)arg3 ;
-(id)_URLByWritingStrippedImageData:(id)arg1 typeIdentifier:(id*)arg2 error:(id*)arg3 ;
-(id)_URLByWritingData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_URLByWritingImage:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_newCoverImageAttachmentWithAttachment:(id)arg1 ;
-(id)_assetForURL:(id)arg1 library:(id)arg2 error:(id*)arg3 ;
-(MSCLStoreItem *)contentItem;
-(void)setContentItem:(MSCLStoreItem *)arg1 ;
-(NSArray *)enabledExternalServices;
-(void)setEnabledExternalServices:(NSArray *)arg1 ;
-(void)setAuthor:(SKUIMediaSocialAuthor *)arg1 ;
-(SKUIMediaSocialAuthor *)author;
-(void)setOutputBlock:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)outputBlock;
-(BOOL)isAttributed;
-(void)setAttributed:(BOOL)arg1 ;
@end

