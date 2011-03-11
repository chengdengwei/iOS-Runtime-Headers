/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSArray, NSString, <ADJSODelegate>, WebScriptObject;

@interface ADSMSComposerJSO : ADJavaScriptObject  {
    <ADJSODelegate> *_delegate;
    NSArray *_messageRecipients;
    NSString *_messageBody;
    WebScriptObject *_listener;
}

@property(retain) WebScriptObject * listener;
@property(copy) NSString * messageBody;
@property(retain) NSArray * messageRecipients;
@property <ADJSODelegate> * delegate;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptingKeys;
+ (id)scriptSelectors;

- (void)setMessageRecipients:(id)arg1;
- (id)messageRecipients;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)setListener:(id)arg1;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (void)send;
- (id)body;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setBody:(id)arg1;
- (id)listener;
- (id)messageBody;
- (void)setMessageBody:(id)arg1;

@end