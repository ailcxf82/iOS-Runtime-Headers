/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSTimer;

@interface MediaVolumeSlider : UIOldSliderControl {
    unsigned int _tracking : 1;
    unsigned int _endingTracking : 1;
    unsigned int _appModeIsMovie : 1;
    unsigned int _updatingVolumeForExternalChange : 1;
    unsigned int _lastCommitSucceeded : 1;
    NSTimer *_commitTimer;
    float _hitBufferHeight;
    float _hitBufferY;
    float _lastCommittedValue;
    float _lastTrackingValue;
}

@property(getter=isForMovie) BOOL forMovie;

+ (float)defaultHeight;

- (float)_playerVolume;
- (BOOL)_setPlayerVolume:(float)arg1;
- (void)_updateVolume:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)beginTrackingAt:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)commitVolume:(id)arg1;
- (id)createSliderKnobView;
- (void)dealloc;
- (void)drawSliderPiece:(NSInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillBounds;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2 fudgeKnob:(BOOL)arg3;
- (id)imageForSliderPiece:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isForMovie:(BOOL)arg2;
- (BOOL)isForMovie;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setForMovie:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2 animationCurve:(NSInteger)arg3;

@end