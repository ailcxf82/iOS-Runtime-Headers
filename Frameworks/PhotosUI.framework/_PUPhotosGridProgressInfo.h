/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSIndexPath, NSString, PHAsset, PHAssetCollection;

@interface _PUPhotosGridProgressInfo : NSObject {
    PHAsset *_asset;
    NSIndexPath *_cachedIndexPath;
    PHAssetCollection *_collection;
    NSString *_identifier;
    float _progress;
}

@property(retain) PHAsset * asset;
@property(retain) NSIndexPath * cachedIndexPath;
@property(retain) PHAssetCollection * collection;
@property(retain) NSString * identifier;
@property float progress;

- (void).cxx_destruct;
- (id)asset;
- (id)cachedIndexPath;
- (id)collection;
- (id)identifier;
- (float)progress;
- (void)setAsset:(id)arg1;
- (void)setCachedIndexPath:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProgress:(float)arg1;

@end