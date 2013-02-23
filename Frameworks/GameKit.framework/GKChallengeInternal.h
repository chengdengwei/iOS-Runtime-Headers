/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSOrderedSet, NSString;

@interface GKChallengeInternal : GKInternalRepresentation {
    NSString *_bundleID;
    NSString *_challengeID;
    NSOrderedSet *_compatibleBundleIDs;
    NSDate *_completionDate;
    NSDate *_issueDate;
    NSString *_issuingPlayerID;
    NSString *_message;
    NSString *_receivingPlayerID;
    int _state;
}

@property(retain) NSString * bundleID;
@property(retain) NSString * challengeID;
@property(retain) NSOrderedSet * compatibleBundleIDs;
@property(retain) NSDate * completionDate;
@property(retain) NSDate * issueDate;
@property(retain) NSString * issuingPlayerID;
@property(retain) NSString * message;
@property(retain) NSString * receivingPlayerID;
@property int state;

+ (id)codedPropertyKeys;
+ (id)internalRepresentation;

- (id)bundleID;
- (id)challengeID;
- (id)compatibleBundleIDs;
- (id)completionDate;
- (void)dealloc;
- (id)findLocalGameBundleID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)issueDate;
- (id)issueRepresentationToPlayerID:(id)arg1;
- (id)issuingPlayerID;
- (id)message;
- (id)receivingPlayerID;
- (id)serverRepresentation;
- (void)setBundleID:(id)arg1;
- (void)setChallengeID:(id)arg1;
- (void)setCompatibleBundleIDs:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setIssueDate:(id)arg1;
- (void)setIssuingPlayerID:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setReceivingPlayerID:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end