/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

@class NSMutableDictionary;

@interface SLDFacebookServiceDelegate : NSObject <SLDServiceDelegate> {
    NSMutableDictionary *_ssoDialogCache;
}

@property(retain) NSMutableDictionary * ssoDialogCache;


- (void).cxx_destruct;
- (void)setSsoDialogCache:(id)arg1;
- (id)ssoDialogCache;
- (void)_observeBackgroundTaskAgent;
- (id)createSessionWithService:(id)arg1 managedObjectContext:(id)arg2;
- (id)xpcServiceName;
- (void)service:(id)arg1 didInitWithServer:(id)arg2;

@end