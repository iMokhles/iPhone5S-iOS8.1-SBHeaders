//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@interface SBApplication (Snapshots)
+ (void)flushAllSystemSnapshots;
+ (void)removalTimerFired:(id)arg1;
+ (void)setRemovalTimer:(double)arg1 forSnapshotWithPath:(id)arg2;
+ (void)removeCachedSnapshotsMatchingPath:(id)arg1;
+ (void)removeCachedSnapshotsForScreen:(id)arg1;
+ (void)removeCachedSnapshotSurfaceForPath:(id)arg1;
+ (void)removeCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)setCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)setCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2 purgeAfter:(double)arg3;
+ (void *)cachedSnapshotSurfaceForPath:(id)arg1;
+ (id)systemSnapshotsDirectory;
+ (id)_snapshotsDictionary;
+ (id)_timersDictionary;
- (struct CGRect)snapshotFrameAdjustedForClassicBasedOnFrame:(struct CGRect)arg1 insideBounds:(struct CGRect)arg2 withStatusBarHeight:(double)arg3 andDefaultPNGSize:(struct CGSize)arg4 forOrientation:(long long)arg5;
- (id)_screenFromSceneID:(id)arg1;
- (void)_noteSnapshotDidUpdate:(long long)arg1;
- (void)_noteSnapshotDidUpdate;
- (id)_snapshotCreationDeletionQueueForSceneID:(id)arg1;
- (id)_snapshotImageInfoForSceneID:(id)arg1 named:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 downscaled:(_Bool)arg5 launchingOrientation:(long long)arg6;
- (void)_protectedDataDidBecomeAvailable:(id)arg1;
- (_Bool)_snapshotQueue_saveData:(id)arg1 toPath:(id)arg2 forSceneID:(id)arg3;
- (void)_snapshotQueue_writeSnapshotDataWithProvider:(id)arg1 atPath:(id)arg2;
- (void)_saveSnapshotForSceneID:(id)arg1 frame:(struct CGRect)arg2 name:(id)arg3 overrideScale:(double)arg4;
- (void)_saveSuspendSnapshot:(id)arg1 forSceneID:(id)arg2 scale:(double)arg3;
- (id)_snapshotImageWithImageName:(id)arg1 sceneID:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 downscaled:(_Bool)arg5 launchingOrientation:(long long)arg6 originalOrientation:(long long *)arg7 currentOrientation:(long long *)arg8;
- (id)_snapshotImageForSnapshotImageInfo:(id)arg1 downscaled:(_Bool)arg2 originalOrientation:(out long long *)arg3 currentOrientation:(out long long *)arg4;
- (id)_cachedSnapshotForImageInfo:(id)arg1 downscaled:(_Bool)arg2 originalOrientation:(out long long *)arg3 currentOrientation:(out long long *)arg4;
- (id)_cachedImageForSnapshotPath:(id)arg1 sceneID:(id)arg2 scale:(double)arg3;
- (id)_loadImageForSnapshotAtPath:(id)arg1 fileOrientation:(long long *)arg2;
- (id)_fileSnapshotForImageInfo:(id)arg1 downscaled:(_Bool)arg2 originalOrientation:(out long long *)arg3 currentOrientation:(out long long *)arg4;
- (id)_pathForSnapshotWithName:(id)arg1 sceneID:(id)arg2 scale:(double)arg3 downscaled:(_Bool)arg4;
- (id)_baseAppSnapshotPath;
- (id)_snapshotImageInfoForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 downscaled:(_Bool)arg4 launchingOrientation:(long long)arg5;
- (_Bool)_isSnapshotPresentForLaunchingInterfaceOrientation:(long long)arg1;
- (id)_snapshotSceneContainerNameForSceneID:(id)arg1;
- (id)_snapshotContainerName;
- (void)deleteSnapshotForSceneID:(id)arg1 name:(id)arg2 scale:(double)arg3;
- (void)createDownscaledSnapshotFromFullSizeSnapshotForMainScene;
- (id)snapshotImageInfosWithImageName:(id)arg1 sceneID:(id)arg2 launchingSize:(struct CGSize)arg3 launchingScale:(double)arg4 launchingOrientation:(long long)arg5;
- (void)saveSuspendSnapshot:(id)arg1 forScene:(id)arg2;
- (void)saveSnapshotForSceneID:(id)arg1 frame:(struct CGRect)arg2 name:(id)arg3 overrideScale:(double)arg4;
- (void)flushSnapshotsForSceneID:(id)arg1;
- (void)flushSnapshotsForAllScenes;
- (id)appSnapshotPathForSceneID:(id)arg1 downscaled:(_Bool)arg2;
- (id)cachedSnapshotForImageInfo:(id)arg1 downscaled:(_Bool)arg2 originalOrientation:(out long long *)arg3 currentOrientation:(out long long *)arg4;
@end

