/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@class NSTimer;

@interface SKStopWatch : DPTextLayer {
    double _duration;
    NSTimer *_runTimer;
}

- (void)dealloc;
- (void)reset;
- (BOOL)running;
- (void)start;
- (void)stop;
- (void)updateTime:(id)arg1;

@end