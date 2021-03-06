/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDViewportInfo, GEOStructuredAddress, NSString;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
    } _has;
    unsigned int _maxResults;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
}

@property BOOL hasMaxResults;
@property(readonly) BOOL hasQueryString;
@property(readonly) BOOL hasStructuredAddress;
@property(readonly) BOOL hasViewportInfo;
@property unsigned int maxResults;
@property(retain) NSString * queryString;
@property(retain) GEOStructuredAddress * structuredAddress;
@property(retain) GEOPDViewportInfo * viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxResults;
- (BOOL)hasQueryString;
- (BOOL)hasStructuredAddress;
- (BOOL)hasViewportInfo;
- (unsigned int)hash;
- (id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)queryString;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setQueryString:(id)arg1;
- (void)setStructuredAddress:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)structuredAddress;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
