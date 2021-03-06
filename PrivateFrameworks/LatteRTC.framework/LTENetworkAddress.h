/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@class NSString;

@interface LTENetworkAddress : NSObject {
    NSString *_interfaceName;
    NSString *_ip;
    BOOL _isIPv6;
    unsigned short _port;
}

@property(copy) NSString * interfaceName;
@property(copy) NSString * ip;
@property BOOL isIPv6;
@property unsigned short port;

- (void)dealloc;
- (id)init;
- (id)interfaceName;
- (id)ip;
- (BOOL)isIPv6;
- (unsigned short)port;
- (void)setInterfaceName:(id)arg1;
- (void)setIp:(id)arg1;
- (void)setIsIPv6:(BOOL)arg1;
- (void)setPort:(unsigned short)arg1;

@end
