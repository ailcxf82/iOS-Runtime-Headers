/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKAchievementCellContent : GKMultilineCellContentView {
    BOOL _highlighted;
    BOOL _offsetImage;
}

@property(getter=isHighlighted) BOOL highlighted;
@property BOOL offsetImage;

- (void)drawLineIndex:(unsigned int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 highlighted:(BOOL)arg3;
- (id)init;
- (BOOL)isHighlighted;
- (BOOL)offsetImage;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOffsetImage:(BOOL)arg1;
- (void)setTheme:(id)arg1;

@end