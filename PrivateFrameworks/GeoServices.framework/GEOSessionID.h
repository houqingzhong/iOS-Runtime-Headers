/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSessionID : PBCodable  {
    unsigned long long _low;
    unsigned long long _high;
}

@property unsigned long long high;
@property unsigned long long low;


- (void)setHigh:(unsigned long long)arg1;
- (unsigned long long)high;
- (unsigned long long)low;
- (void)setLow:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end