/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSItemProviderTypeCoercion : NSObject {

	id _value;
	Class _targetClass;

}

@property (nonatomic,retain) id value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) Class targetClass;              //@synthesize targetClass=_targetClass - In the implementation block
+(id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2 ;
+(SEL)selectorForCoercionFromValue:(id)arg1 toClass:(Class)arg2 ;
+(id)coercionClassStringFromClass:(Class)arg1 ;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(Class)targetClass;
-(BOOL)shouldCoerceForCoding;
-(id)coerceValueAndReturnError:(id*)arg1 ;
-(id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id*)arg2 ;
@end

