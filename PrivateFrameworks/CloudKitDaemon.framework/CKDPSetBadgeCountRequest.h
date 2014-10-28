/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int badgeCount : 1; 
        unsigned int forDevice : 1; 
    unsigned int _badgeCount;
    BOOL _forDevice;
    } _has;
}

@property unsigned int badgeCount;
@property BOOL forDevice;
@property BOOL hasBadgeCount;
@property BOOL hasForDevice;

+ (id)options;

- (unsigned int)badgeCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)forDevice;
- (BOOL)hasBadgeCount;
- (BOOL)hasForDevice;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBadgeCount:(unsigned int)arg1;
- (void)setForDevice:(BOOL)arg1;
- (void)setHasBadgeCount:(BOOL)arg1;
- (void)setHasForDevice:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end