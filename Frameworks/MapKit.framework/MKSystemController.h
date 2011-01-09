/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKSystemController : NSObject 
{
}

+ (id)sharedInstance;

- (BOOL)hasTelephonyCapability;
- (float)screenScale;
- (BOOL)isMultitaskingSupported;
- (NSInteger)userInterfaceIdiom;
- (BOOL)isSensitiveUIEnabled;
- (BOOL)hasMultitouchDeviceInstalled;
- (BOOL)isTileRequestThrottled;
- (BOOL)isStreetViewPIPEnabled;
- (BOOL)isStreetViewEnabled;
- (BOOL)isChinaDevice;
- (BOOL)isLiveScrollCapable;
- (BOOL)useLargeTiles;
- (BOOL)isHiDPI;
- (BOOL)isRunningOniPad;
- (struct CGSize { float x1; float x2; })screenSize;

@end