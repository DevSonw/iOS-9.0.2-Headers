/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAWebWebResult.h>

@class NSNumber, SAWebAcePicture, NSArray;

@interface SAWebImageResult : SAWebWebResult

@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,retain) SAWebAcePicture * picture; 
@property (nonatomic,copy) NSArray * thumbNails; 
+(id)imageResult;
+(id)imageResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setPicture:(SAWebAcePicture *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)fileSize;
-(void)setFileSize:(NSNumber *)arg1 ;
-(SAWebAcePicture *)picture;
-(NSArray *)thumbNails;
-(void)setThumbNails:(NSArray *)arg1 ;
@end

