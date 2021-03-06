/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class IKAppDocument, NSArray, NSDictionary, NSNumber, NSSet, NSString, NSValue, SKUINavigationBarController, SSVLoadURLOperation, UIView, UIViewController;

@interface SKUIDocumentContainerViewController : SKUIViewController <IKAppDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationPaletteProvider> {
    UIViewController *_beforeErrorChildViewController;
    UIViewController *_childViewController;
    NSArray *_defaultLeftBarButtonItems;
    IKAppDocument *_document;
    SSVLoadURLOperation *_loadURLOperation;
    SKUINavigationBarController *_navigationBarController;
    NSNumber *_orientationAtDisappear;
    NSNumber *_pageResponseAbsoluteTime;
    NSSet *_personalizationItems;
    NSDictionary *_presentationOptions;
    NSArray *_searchBarControllers;
    NSValue *_sizeAtDisappear;
    unsigned int _templateViewElementType;
    NSString *_urlString;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) UIView * navigationPaletteView;
@property(readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_enqueueLoadURLOperation;
- (void)_finishLegacyProtocolOperationForResponse:(id)arg1 dataProvider:(id)arg2 dictionary:(id)arg3;
- (void)_finishLoadOperationWithResponse:(id)arg1 error:(id)arg2;
- (void)_forceOrientationBackToSupportedOrientation;
- (id)_millisecondsFromTimeInterval:(double)arg1;
- (id)_navigationBarViewElement;
- (void)_networkTypeChangeNotification:(id)arg1;
- (id)_newViewControllerWithTemplateElement:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (void)_redirectToURL:(id)arg1;
- (void)_reloadDefaultBarButtonItems;
- (void)_reloadForNetworkTypeChange;
- (void)_reloadNavigationBarController;
- (void)_reloadNavigationPalette;
- (void)_sendOnViewAttributesChangeWithAttributes:(id)arg1;
- (void)_setChildViewController:(id)arg1;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (id)_sidepackViewControllerWithOptions:(id)arg1 clientContext:(id)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentScrollToTop:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id)arg2;
- (id)impressionableViewElementsForDocument:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (void)loadView;
- (id)navigationPaletteView;
- (void)reloadData;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)skui_viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end
