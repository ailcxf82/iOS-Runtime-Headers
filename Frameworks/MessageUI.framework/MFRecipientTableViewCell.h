/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipient, MFRecipientTableViewCellView;

@interface MFRecipientTableViewCell : UITableViewCell {
    MFComposeRecipient *_recipient;
    MFRecipientTableViewCellView *_recipientView;
}

+ (id)cellForRecipient:(id)arg1;
+ (float)height;
+ (id)identifier;

- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)recipient;
- (void)setRecipient:(id)arg1;

@end