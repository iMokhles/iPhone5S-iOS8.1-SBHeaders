//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDateFormatter, NSHashTable, NSString, NSTimer;

@interface SBStatusBarStateAggregator : NSObject
{
    unsigned long long _coalescentBlockDepth;
    _Bool _hasPostedOnce;
    unsigned long long _itemPostState[25];
    _Bool _nonItemDataChanged;
    CDStruct_0e61b686 _data;
    int _actions;
    NSHashTable *_postObservers;
    _Bool _notifyingPostObservers;
    long long _showsRecordingOverrides;
    NSDateFormatter *_timeItemDateFormatter;
    NSTimer *_timeItemTimer;
    NSString *_timeItemTimeString;
    NSString *_operatorName;
    NSString *_serviceString;
    NSString *_serviceCrossfadeString;
    NSArray *_countryCodesShowingEmergencyOnlyStatus;
    unsigned long long _airplaneTransitionToken;
    _Bool _suppressCellServiceForAirplaneModeTransition;
    _Bool _showsActivityIndicatorOnHomeScreen;
    long long _activityIndicatorEverywhereCount;
    _Bool _showsActivityIndicatorForNewsstand;
    long long _syncActivityIndicatorCount;
    NSString *_activityDisplayIdentifier;
    _Bool _showingNotChargingItem;
    NSString *_batteryDetailString;
    _Bool _alarmEnabled;
    _Bool _applyingAssistantStyle;
    int _locationStatusBarIconType;
}

+ (int)_thermalColorForLevel:(int)arg1;
+ (id)sharedInstance;
- (void)_updateLocationState;
- (void)_buildLocationState;
- (void)_noteNotChargingStatusChanged;
- (void)_setShowingNotChargingItem;
- (_Bool)_shouldShowNotChargingItem;
- (_Bool)_shouldShowEmergencyOnlyStatus;
- (id)_sbCarrierNameForOperator:(id)arg1;
- (id)_displayStringForRegistrationStatus:(int)arg1;
- (id)_displayStringForSIMStatus:(id)arg1;
- (_Bool)_simStatusMeansLocked:(id)arg1;
- (void)_noteAirplaneModeChanged;
- (void)_resetTimeItemFormatter;
- (void)_restartTimeItemTimer;
- (void)_stopTimeItemTimer;
- (void)_requestActions:(int)arg1;
- (void)_notifyNonItemDataChanged;
- (void)_notifyItemChanged:(int)arg1;
- (_Bool)_setItem:(int)arg1 enabled:(_Bool)arg2;
- (void)_postItem:(int)arg1 withState:(unsigned long long)arg2;
- (void)updateStatusBarItem:(int)arg1;
- (void)_updateTetheringState;
- (void)_updateThermalColorItem;
- (void)_updateAssistantItem;
- (void)_updateAirplayItem;
- (void)_updateQuietModeItem;
- (void)_updateRotationLockItem;
- (void)_updateLocationItem;
- (void)_updateActivityItem;
- (void)_updateCallForwardingItem;
- (void)_updateVPNItem;
- (void)_updateAlarmItem;
- (void)_updateTTYItem;
- (void)_updateBluetoothBatteryItem;
- (void)_updateBluetoothItem;
- (void)_updateBatteryItems;
- (void)_updateDataNetworkItem;
- (void)_updateServiceItem;
- (void)_updateSignalStrengthItem;
- (void)_updateAirplaneMode;
- (void)_updateTimeItems;
- (void)_registerForNotifications;
- (void)removePostingObserver:(id)arg1;
- (void)addPostingObserver:(id)arg1;
- (void)sendStatusBarActions:(int)arg1;
- (void)setShowsSyncActivityIndicator:(_Bool)arg1;
- (void)setShowsActivityIndicatorForNewsstand:(_Bool)arg1;
- (void)setShowsActivityIndicatorEverywhere:(_Bool)arg1;
- (void)setShowsActivityIndicatorOnHomeScreen:(_Bool)arg1;
- (void)setAlarmEnabled:(_Bool)arg1;
- (void)setShowsOverridesForRecording:(_Bool)arg1;
- (void)_tickRefCount:(long long *)arg1 up:(_Bool)arg2 withTransitionBlock:(CDUnknownBlockType)arg3;
- (id)operatorName;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (void)dealloc;
- (id)init;

@end

