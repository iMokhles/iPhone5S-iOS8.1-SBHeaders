//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationFadeAlertToRemoteAlert : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBRemoteAlertAdapter *_remoteAlert;
    SBAlertManager *_alertManager;
    double _animationDuration;
}

- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithAlert:(id)arg1 toAlert:(id)arg2 alertManager:(id)arg3;

@end

