//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolderView.h"

#import "SBSearchGestureObserver.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBDockIconListView, SBDockView, SBFParallaxSettings, SBRootFolder, SBSearchViewController, TPLegacyLCDTextView;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver, UIGestureRecognizerDelegate>
{
    SBDockView *_dockView;
    SBDockIconListView *_dockListView;
    _Bool _dockViewBorrowed;
    TPLegacyLCDTextView *_idleTextView;
    SBFParallaxSettings *_parallaxSettings;
    double _searchGestureProgress;
    double _reachabilityYOffset;
    _Bool _layingOutForReachability;
    SBSearchViewController *_searchViewController;
    unsigned long long _dockEdge;
}

@property(nonatomic, getter=isDockViewBorrowed) _Bool dockViewBorrowed; // @synthesize dockViewBorrowed=_dockViewBorrowed;
@property(nonatomic) unsigned long long dockEdge; // @synthesize dockEdge=_dockEdge;
@property(readonly, retain, nonatomic) SBSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
- (void)_handleReachabilityDectivatedAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleReachabilityActivatedAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (double)reachabilityYOffset;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_configureParallax;
- (void)lcdTextViewCompletedScroll:(id)arg1;
- (void)setIdleText:(id)arg1;
- (_Bool)_updatesWallpaperRelativeCenter;
- (void)cleanUpAfterZoomAnimation;
- (void)prepareForZoomAnimation;
- (void)layoutIconLists:(double)arg1 domino:(_Bool)arg2 forceRelayout:(_Bool)arg3;
- (void)tearDownListViews;
- (void)_updateEditingStateAnimated:(_Bool)arg1;
- (void)resetIconListViews;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (void)returnDockView;
- (void)borrowDockView;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)didAnimate;
- (void)willAnimate;
- (void)updateDockViewOrientation;
- (void)setDockVerticalStretch:(double)arg1;
- (void)setDockOffscreenFraction:(double)arg1;
- (id)dockView;
- (void)_layoutSubviews;
- (void)layoutDockView;
- (struct CGRect)effectivePageControlFrame;
- (void)layoutViewsForSearch;
- (struct CGRect)effectiveDockFrame;
- (double)effectiveStatusBarHeight;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setNeedsLayout;
- (void)returnScalingView;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 forSnapshot:(_Bool)arg4;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBRootFolder *folder;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

