/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNBillboardConstraint : SCNConstraint {

	unsigned long long _freeAxes;

}

@property (assign,nonatomic) unsigned long long freeAxes;              //@synthesize freeAxes=_freeAxes - In the implementation block
+(id)billboardConstraint;
+(BOOL)supportsSecureCoding;
-(void)setFreeAxes:(unsigned long long)arg1 ;
-(unsigned long long)freeAxes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
