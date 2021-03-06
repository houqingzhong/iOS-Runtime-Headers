/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableArray, NSMutableSet, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
    BOOL _wasDrained;
}

- (void)addRecord:(id)arg1;
- (int)currentBatchCount;
- (void)dealloc;
- (id)drainBatches;
- (id)init;
- (BOOL)isAboveMaximumResourceBudget;
- (void)reset;

@end
