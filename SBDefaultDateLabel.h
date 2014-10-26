//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "SBBulletinDateLabel.h"

@class NSDate, NSString, NSTimer;

@interface SBDefaultDateLabel : UILabel <SBBulletinDateLabel>
{
    NSDate *_timeZoneRelativeStartDate;
    NSDate *_timeZoneRelativeEndDate;
    _Bool _allDay;
    _Bool _isTimestamp;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    _Bool _effectiveAllDay;
    _Bool _isCoalescingUpdates;
    _Bool _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
    int _labelType;
    id <SBDateLabelDelegate> _delegate;
}

+ (id)_currentCalendar;
@property(nonatomic) _Bool isTimestamp; // @synthesize isTimestamp=_isTimestamp;
@property(nonatomic) int labelType; // @synthesize labelType=_labelType;
@property(nonatomic) id <SBDateLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)update;
- (void)_forceUpdate;
- (void)updateTextIfNecessary;
- (void)_updateTimerFired:(id)arg1;
- (void)updateTextIfNecessary:(_Bool)arg1;
- (id)constructLabelString;
- (id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(_Bool)arg3 sameDayDates:(_Bool)arg4 eventOngoing:(_Bool)arg5 withCurrentDate:(id)arg6 forStartLabel:(_Bool)arg7;
- (_Bool)isEffectiveAllDay;
- (_Bool)isDateWithinEffectiveAllDayRange:(id)arg1;
- (id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2;
- (void)_updateEffectiveAllDayTimes;
- (void)_resetEffectiveAllDayState:(_Bool)arg1;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setTimeZoneRelativeEndDate:(id)arg1;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)_configureTimer;
- (void)_invalidateTimer;
- (void)prepareForReuse;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

