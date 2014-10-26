//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarStateProvider.h"

@class NSDateFormatter, NSString;

@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider
{
    char _oldAggregatorTimeCString[64];
    char _timeCString[64];
    NSDateFormatter *_timeFormatter;
    _Bool _showOptimalCellData;
    NSString *_inCallDetail;
}

+ (_Bool)_itemIsIgnored:(int)arg1;
- (void)_callDurationChanged;
- (void)_resetTimeItemFormatter;
- (id)_timeFormatter;
- (void)_composePostDataFromAggregatorData:(CDStruct_0e61b686 *)arg1;
- (_Bool)_shouldPostForUpdatesToNonItemData:(const CDStruct_0e61b686 *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_0e61b686 *)arg3;
- (id)doubleHeightStatusStringForStyle:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

