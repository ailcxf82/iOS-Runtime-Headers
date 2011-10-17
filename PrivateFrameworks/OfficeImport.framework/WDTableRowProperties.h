/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties, WDTableProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {
    WDTableProperties *mTableProperties;
    WDCharacterProperties *mCharacterProperties;
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    struct { 
        short widthBefore; 
        int widthBeforeType; 
        short widthAfter; 
        int widthAfterType; 
        int height; 
        int heightType; 
        unsigned int widthBeforeOverridden : 1; 
        unsigned int widthBeforeTypeOverridden : 1; 
        unsigned int widthAfterOverridden : 1; 
        unsigned int widthAfterTypeOverridden : 1; 
        unsigned int heightOverridden : 1; 
        unsigned int heightTypeOverridden : 1; 
        unsigned int header : 1; 
        unsigned int headerOverridden : 1; 
    } mOriginalProperties;
    struct { 
        short widthBefore; 
        int widthBeforeType; 
        short widthAfter; 
        int widthAfterType; 
        int height; 
        int heightType; 
        unsigned int widthBeforeOverridden : 1; 
        unsigned int widthBeforeTypeOverridden : 1; 
        unsigned int widthAfterOverridden : 1; 
        unsigned int widthAfterTypeOverridden : 1; 
        unsigned int heightOverridden : 1; 
        unsigned int heightTypeOverridden : 1; 
        unsigned int header : 1; 
        unsigned int headerOverridden : 1; 
    } mTrackedProperties;
}


- (BOOL)header;
- (void)addPropertiesValues:(struct { short x1; int x2; short x3; int x4; int x5; int x6; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; }*)arg1 to:(struct { short x1; int x2; short x3; int x4; int x5; int x6; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; }*)arg2;
- (void)addProperties:(id)arg1;
- (id)tableProperties;
- (void)setWidthBefore:(short)arg1;
- (void)setWidthBeforeType:(int)arg1;
- (void)setWidthAfter:(short)arg1;
- (void)setWidthAfterType:(int)arg1;
- (void)setHeightType:(int)arg1;
- (BOOL)isWidthBeforeOverridden;
- (short)widthBefore;
- (BOOL)isWidthBeforeTypeOverridden;
- (int)widthBeforeType;
- (BOOL)isWidthAfterOverridden;
- (short)widthAfter;
- (BOOL)isWidthAfterTypeOverridden;
- (int)widthAfterType;
- (BOOL)isHeaderOverridden;
- (BOOL)isHeightTypeOverridden;
- (int)heightType;
- (id)characterProperties;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (BOOL)isHeightOverridden;
- (void)setHeader:(BOOL)arg1;
- (void)setHeight:(long)arg1;
- (long)height;
- (id)initWithDocument:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end