/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSTableCell.h>

@class MCMoreDetailsContentView;

@interface MCMoreDetailsCell : PSTableCell {

	MCMoreDetailsContentView* _mcContentView;

}
+(float)defaultHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPayload:(id)arg1 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
@end

