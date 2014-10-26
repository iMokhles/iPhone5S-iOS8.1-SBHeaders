//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBWallpaperObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBFolderSettings, SBWallpaperEffectView, UIImageView, _UILegibilitySettings;

@interface SBFolderBackgroundView : UIView <_UISettingsKeyObserver, SBWallpaperObserver>
{
    SBWallpaperEffectView *_backdropView;
    UIImageView *_backgroundImageView;
    UIView *_accessibilityBackgroundView;
    SBFolderSettings *_folderSettings;
    _UILegibilitySettings *_legibilitySettings;
}

+ (double)cornerRadiusToInsetContent;
+ (struct CGSize)folderBackgroundSize;
+ (void)warmupIfNecessary;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_updateBackgroundImageView;
- (_Bool)_shouldUseDarkBackground;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_configureAccessibilityBackground;
- (void)adjustCornerRadiusForMagnificationFraction:(double)arg1;
- (void)didAnimate;
- (void)willAnimate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

