/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface LBSGLatLng : PBCodable {
    NSInteger _latE7;
    NSInteger _lngE7;
}

@property NSInteger latE7;
@property NSInteger lngE7;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (float)lat;
- (NSInteger)latE7;
- (NSInteger)lngE7;
- (float)lon;
- (BOOL)readFrom:(id)arg1;
- (void)setLat:(float)arg1;
- (void)setLatE7:(NSInteger)arg1;
- (void)setLngE7:(NSInteger)arg1;
- (void)setLon:(float)arg1;
- (void)writeTo:(id)arg1;

@end