/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UISettingsKeyPathObserver.h>

@class NSHashTable, NSString, UIImage, NSPredicate, PTSRowAction, _UISettings, PTSSection;

@interface PTSRow : NSObject <_UISettingsKeyPathObserver> {

	NSHashTable* _observers;
	NSString* _valueKeyPath;
	NSString* _staticTitle;
	NSString* _titleKeyPath;
	UIImage* _staticImage;
	NSString* _imageKeyPath;
	NSPredicate* _condition;
	PTSRowAction* _action;
	/*^block*/id _valueValidatator;
	/*^block*/id _valueFormatter;
	NSString* _groupKeyPath;
	long long _allowedEditingTypes;
	_UISettings* _settings;
	PTSSection* _section;
	_UISettings* _groupChild;

}

@property (nonatomic,copy) NSString * valueKeyPath;                      //@synthesize valueKeyPath=_valueKeyPath - In the implementation block
@property (nonatomic,copy) NSString * staticTitle;                       //@synthesize staticTitle=_staticTitle - In the implementation block
@property (nonatomic,copy) NSString * titleKeyPath;                      //@synthesize titleKeyPath=_titleKeyPath - In the implementation block
@property (nonatomic,retain) UIImage * staticImage;                      //@synthesize staticImage=_staticImage - In the implementation block
@property (nonatomic,copy) NSString * imageKeyPath;                      //@synthesize imageKeyPath=_imageKeyPath - In the implementation block
@property (nonatomic,copy) NSPredicate * condition;                      //@synthesize condition=_condition - In the implementation block
@property (nonatomic,copy) PTSRowAction * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id valueValidatator;                          //@synthesize valueValidatator=_valueValidatator - In the implementation block
@property (nonatomic,copy) id valueFormatter;                            //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,retain) NSString * groupKeyPath;                    //@synthesize groupKeyPath=_groupKeyPath - In the implementation block
@property (assign,nonatomic) long long allowedEditingTypes;              //@synthesize allowedEditingTypes=_allowedEditingTypes - In the implementation block
@property (nonatomic,retain) _UISettings * settings;                     //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,nonatomic,__weak) PTSSection * section;                //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) _UISettings * groupChild;                   //@synthesize groupChild=_groupChild - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)row;
+(id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 ;
-(id)is_increment:(double)arg1 ;
-(id)pu_increment:(double)arg1 ;
-(Class)rowTableViewCellClass;
-(void)setValueValidatator:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(PTSSection *)section;
-(_UISettings *)settings;
-(void)addObserver:(id)arg1 ;
-(PTSRowAction *)action;
-(id)title;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)image;
-(void)setAction:(PTSRowAction *)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(id)conditionFormat:(id)arg1 ;
-(void)setSettings:(_UISettings *)arg1 ;
-(id)group;
-(NSPredicate *)condition;
-(void)setCondition:(NSPredicate *)arg1 ;
-(void)setSection:(PTSSection *)arg1 ;
-(id)action:(id)arg1 ;
-(id)condition:(id)arg1 ;
-(void)setValueKeyPath:(NSString *)arg1 ;
-(NSString *)valueKeyPath;
-(id)staticTitle:(id)arg1 ;
-(id)valueKeyPath:(id)arg1 ;
-(void)setStaticTitle:(NSString *)arg1 ;
-(void)setTitleKeyPath:(NSString *)arg1 ;
-(void)setStaticImage:(UIImage *)arg1 ;
-(void)setImageKeyPath:(NSString *)arg1 ;
-(void)setValueFormatter:(id)arg1 ;
-(void)setGroupKeyPath:(NSString *)arg1 ;
-(void)setAllowedEditingTypes:(long long)arg1 ;
-(NSString *)staticTitle;
-(NSString *)titleKeyPath;
-(UIImage *)staticImage;
-(NSString *)imageKeyPath;
-(id)valueValidatator;
-(id)valueFormatter;
-(NSString *)groupKeyPath;
-(long long)allowedEditingTypes;
-(void)_sendValueChanged;
-(void)_sendTitleChanged;
-(void)_sendImageChanged;
-(void)resolveTemplatesWithIndex:(unsigned long long)arg1 ;
-(void)updateWithRow:(id)arg1 ;
-(id)titleKeyPath:(id)arg1 ;
-(id)staticImage:(id)arg1 ;
-(id)imageKeyPath:(id)arg1 ;
-(id)valueValidator:(/*^block*/id)arg1 ;
-(id)valueFormatter:(/*^block*/id)arg1 ;
-(id)groupKeyPath:(id)arg1 ;
-(id)allowedEditingTypes:(long long)arg1 ;
-(id)childSettingsForKeyPath:(id)arg1 ;
-(id)concreteCopyWithIndex:(unsigned long long)arg1 ;
-(BOOL)allowsDelete;
-(BOOL)allowsReorder;
-(BOOL)allowsDuplicate;
-(BOOL)allowsShare;
-(_UISettings *)groupChild;
-(void)setGroupChild:(_UISettings *)arg1 ;
@end
