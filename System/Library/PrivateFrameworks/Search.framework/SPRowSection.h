/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPSection.h>
#import <libobjc.A.dylib/PRSRowSection.h>

@class NSString, PRSImage, NSArray, NSURL;

@interface SPRowSection : SPSection <PRSRowSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (assign,nonatomic) BOOL hide_divider; 
@property (assign,nonatomic) BOOL card_padding_bottom; 
@property (assign,nonatomic) BOOL card_padding_top; 
@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) BOOL key_nowrap; 
@property (assign,nonatomic) long long key_weight; 
@property (nonatomic,retain) NSString * value; 
@property (assign,nonatomic) BOOL value_nowrap; 
@property (assign,nonatomic) long long value_weight; 
@property (nonatomic,retain) PRSImage * value_image; 
@property (nonatomic,retain) NSString * value_image_align; 
@property (nonatomic,retain) NSString * punchout_picker_label; 
@property (nonatomic,retain) NSString * punchout_picker_dismiss_label; 
@property (nonatomic,retain) NSArray * punchouts; 
@end

