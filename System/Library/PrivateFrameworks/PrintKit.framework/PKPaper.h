/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSString, NSDictionary;

@interface PKPaper : NSObject {

	NSString* name;
	NSString* _baseName;
	int width;
	int height;
	int leftMargin;
	int topMargin;
	int rightMargin;
	int bottomMargin;
	BOOL _isTransverse;
	NSDictionary* mediaInfo;

}

@property (nonatomic,retain,readonly) NSString * localizedName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * baseName; 
@property (nonatomic,readonly) CGSize paperSize; 
@property (nonatomic,readonly) CGRect imageableAreaRect; 
@property (nonatomic,readonly) double imageableArea; 
@property (nonatomic,readonly) BOOL isBorderless; 
@property (nonatomic,readonly) BOOL isTransverse;                                    //@synthesize isTransverse=_isTransverse - In the implementation block
@property (nonatomic,readonly) BOOL isRoll; 
@property (nonatomic,readonly) unsigned long long minCutLength; 
@property (nonatomic,readonly) unsigned long long maxCutLength; 
@property (nonatomic,retain,readonly) NSString * mediaType; 
@property (nonatomic,retain,readonly) NSString * mediaTypeName; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) int leftMargin; 
@property (assign,nonatomic) int topMargin; 
@property (assign,nonatomic) int rightMargin; 
@property (assign,nonatomic) int bottomMargin; 
@property (nonatomic,readonly) unsigned long long topMarginInPoints; 
@property (nonatomic,readonly) unsigned long long bottomMarginInPoints; 
@property (nonatomic,readonly) int minHeight; 
@property (nonatomic,readonly) int maxHeight; 
@property (nonatomic,copy) NSDictionary * mediaInfo; 
+(id)generic3_5x5Paper;
+(id)generic4x6Paper;
+(id)genericLetterPaper;
+(id)genericA4Paper;
+(id)photoPapers;
+(id)documentPapers;
+(id)genericA6Paper;
+(id)genericPRC32KPaper;
+(BOOL)useMetric;
+(id)mediaNameForWidth:(int)arg1 Height:(int)arg2 mediaType:(id)arg3 Borderless:(BOOL)arg4 Simplex:(BOOL)arg5 ;
+(id)genericHagakiPaper;
+(id)genericBorderlessWithName:(id)arg1 ;
+(id)paperWithAttributes:(id)arg1 ;
+(id)rollPaperWithAttributes:(id)arg1 ;
+(id)genericLegalPaper;
+(id)genericWithName:(id)arg1 ;
+(BOOL)willAdjustMarginsForDuplexMode:(id)arg1 ;
-(NSString *)mediaType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)topMargin;
-(void)setRightMargin:(int)arg1 ;
-(int)width;
-(NSString *)localizedName;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(int)rightMargin;
-(CGSize)paperSize;
-(BOOL)isRoll;
-(unsigned long long)maxCutLength;
-(unsigned long long)topMarginInPoints;
-(unsigned long long)bottomMarginInPoints;
-(id)cutToLength:(double)arg1 ;
-(CGRect)imageableAreaRect;
-(NSString *)mediaTypeName;
-(unsigned long long)minCutLength;
-(void)setHeight:(int)arg1 ;
-(BOOL)isEqualSizeAndMediaType:(id)arg1 ;
-(int)minHeight;
-(NSString *)baseName;
-(int)leftMargin;
-(int)bottomMargin;
-(void)setTopMargin:(int)arg1 ;
-(void)setLeftMargin:(int)arg1 ;
-(void)setBottomMargin:(int)arg1 ;
-(id)initWithWidth:(int)arg1 Height:(int)arg2 Left:(int)arg3 Top:(int)arg4 Right:(int)arg5 Bottom:(int)arg6 localizedName:(id)arg7 codeName:(id)arg8 ;
-(void)setMediaInfo:(NSDictionary *)arg1 ;
-(id)cutToPWGLength:(int)arg1 ;
-(NSDictionary *)mediaInfo;
-(id)nameWithoutSuffixes:(id)arg1 ;
-(void)addToMediaCol:(ipp_s*)arg1 ;
-(double)imageableArea;
-(id)localizedNameFromDimensions;
-(id)initWithPWGSize:(pwg_size_s*)arg1 localizedName:(id)arg2 codeName:(id)arg3 ;
-(BOOL)isBorderless;
-(ipp_s*)createMediaColAndDoMargins:(BOOL)arg1 ;
-(BOOL)isEqualSize:(id)arg1 ;
-(long long)sizeAndImageableCompare:(id)arg1 ;
-(long long)sizeMediaTypeAndImageableCompare:(id)arg1 ;
-(id)paperWithMarginsAdjustedForDuplexMode:(id)arg1 ;
-(BOOL)isTransverse;
-(int)maxHeight;
@end
