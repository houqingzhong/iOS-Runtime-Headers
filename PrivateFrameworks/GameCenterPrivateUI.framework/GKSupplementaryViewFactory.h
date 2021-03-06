/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSupplementaryViewFactory : NSObject {
    SEL _configurator;
    Class _reusableViewClass;
    SEL _selector;
    id _target;
}

@property(readonly) SEL configurator;
@property(readonly) Class reusableViewClass;
@property SEL selector;
@property id target;

+ (id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4;
+ (id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3;

- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (SEL)configurator;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4;
- (Class)reusableViewClass;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
