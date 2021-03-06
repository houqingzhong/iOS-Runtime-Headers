/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVSampleBufferDisplayLayerInternal, NSError, NSString;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {
    AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;
}

@property(retain) struct OpaqueCMTimebase { }* controlTimebase;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(readonly) NSError * error;
@property(readonly) NSError * error;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int hash;
@property(readonly) BOOL outputObscuredDueToInsufficientExternalProtection;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property(readonly) int status;
@property(readonly) int status;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property(retain,readonly) struct OpaqueCMTimebase { }* timebase;
@property(copy) NSString * videoGravity;

+ (BOOL)automaticallyNotifiesObserversOfError;
+ (BOOL)automaticallyNotifiesObserversOfStatus;

- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 gravity:(id)arg3;
- (void)_addFigVideoQueueListeners;
- (long)_createVideoQueue;
- (void)_didFinishSuspension:(id)arg1;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(id)arg2;
- (long)_initializeTimebases;
- (void)_refreshAboveHighWaterLevel;
- (void)_removeFigVideoQueueListeners;
- (void)_resetStatusWithOSStatus:(long)arg1;
- (void)_setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:(BOOL)arg1;
- (void)_setStatus:(int)arg1 error:(id)arg2;
- (void)_setSynchronizerTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (id)_transformToAbsoluteAnimationOfBounds:(id)arg1;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 presentationSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_updatePresentationSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_weakReference;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (struct OpaqueCMTimebase { }*)controlTimebase;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer {}**)arg1;
- (void)dealloc;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)error;
- (void)finalize;
- (void)flush;
- (void)flushAndRemoveImage;
- (id)init;
- (BOOL)isReadyForMoreMediaData;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (BOOL)setRenderSynchronizer:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (int)status;
- (void)stopRequestingMediaData;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)videoGravity;
- (id)videoPerformanceMetrics;

@end
