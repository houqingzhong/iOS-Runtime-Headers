/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class HMMessageDispatcher, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface HMXpcClient : NSObject <HMMessageTransport> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _connectionValid;
    HMMessageDispatcher *_messageDispatcher;
    int _notifyRegisterToken;
    BOOL _notifyRegistered;
    id _reconnectionHandler;
    BOOL _requiresCheckin;
    NSXPCConnection *_xpcConnection;
}

@property(retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property BOOL connectionValid;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) HMMessageDispatcher * messageDispatcher;
@property int notifyRegisterToken;
@property BOOL notifyRegistered;
@property(copy) id reconnectionHandler;
@property BOOL requiresCheckin;
@property(readonly) Class superclass;
@property(retain) NSXPCConnection * xpcConnection;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)connection;
- (BOOL)connectionValid;
- (void)dealloc;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (id)init;
- (id)messageDispatcher;
- (int)notifyRegisterToken;
- (BOOL)notifyRegistered;
- (void)recheckinIfRequired:(id)arg1;
- (id)reconnectionHandler;
- (void)registerReconnectionHandler:(id)arg1;
- (BOOL)requiresCheckin;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnectionValid:(BOOL)arg1;
- (void)setNotifyRegisterToken:(int)arg1;
- (void)setNotifyRegistered:(BOOL)arg1;
- (void)setReconnectionHandler:(id)arg1;
- (void)setRequiresCheckin:(BOOL)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
