/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/AXHearingVolumeCellDelegate.h>

@class UINavigationBar, AXHearingAidDisplayController, UIView, AXRemoteHearingAidDevice, _UIBackdropView, UITableView, NSMutableDictionary, AXAccessQueueTimer, NSString;

@interface AXHearingAidCenterController : UIViewController <UITableViewDataSource, UITableViewDelegate, AXHearingVolumeCellDelegate> {

	BOOL _bluetoothAvailable;
	UINavigationBar* _navBar;
	AXHearingAidDisplayController* _parentController;
	UIView* _contentView;
	AXRemoteHearingAidDevice* _device;
	_UIBackdropView* _backdropView;
	UITableView* _tableView;
	_UIBackdropView* _tableViewBackdrop;
	NSMutableDictionary* _separatorViews;
	AXAccessQueueTimer* _volumeUpdateHysteresis;

}

@property (assign,nonatomic) UINavigationBar * navBar;                                      //@synthesize navBar=_navBar - In the implementation block
@property (assign,nonatomic) AXHearingAidDisplayController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) AXRemoteHearingAidDevice * device;                             //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * tableViewBackdrop;                           //@synthesize tableViewBackdrop=_tableViewBackdrop - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * separatorViews;                          //@synthesize separatorViews=_separatorViews - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * volumeUpdateHysteresis;                   //@synthesize volumeUpdateHysteresis=_volumeUpdateHysteresis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewForProperties:(id)arg1 ;
-(void)hearingVolumeDidChange:(id)arg1 ;
-(void)setTableViewBackdrop:(_UIBackdropView *)arg1 ;
-(void)setSeparatorViews:(NSMutableDictionary *)arg1 ;
-(void)setVolumeUpdateHysteresis:(AXAccessQueueTimer *)arg1 ;
-(_UIBackdropView *)tableViewBackdrop;
-(BOOL)_numSelectedStreamingPrograms;
-(void)_updateProgramSection:(long long)arg1 ;
-(void)setClearBackground:(id)arg1 ;
-(AXAccessQueueTimer *)volumeUpdateHysteresis;
-(NSMutableDictionary *)separatorViews;
-(id)_programsForSection:(long long)arg1 ;
-(void)setParentController:(AXHearingAidDisplayController *)arg1 ;
-(AXHearingAidDisplayController *)parentController;
-(void)_doneAction:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)title;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateView;
-(BOOL)accessibilityPerformEscape;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)bluetoothAvailabilityDidChange:(id)arg1 ;
-(void)audioRouteDidChange:(id)arg1 ;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(AXRemoteHearingAidDevice *)device;
-(id)reuseIdentifierForIndexPath:(id)arg1 ;
-(void)updateSeparatorForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
@end
