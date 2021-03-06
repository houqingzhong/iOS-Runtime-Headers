/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeter : NSObject {
    id _internal;
}

+ (void)dummySelector:(id)arg1;
+ (void)initialize;
+ (BOOL)isRelativeAltitudeAvailable;

- (void)dealloc;
- (void)deallocPrivate;
- (id)init;
- (id)initPrivate;
- (void)onFilteredPressure:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startRelativeAltitudeUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)stopRelativeAltitudeUpdates;
- (void)stopRelativeAltitudeUpdatesPrivate;

@end
