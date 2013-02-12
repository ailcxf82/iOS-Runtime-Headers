/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSNumber *_incomingMailServerPortNumber;
    BOOL _incomingMailServerUseSSL;
    NSString *_incomingMailServerUsername;
    NSString *_incomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    BOOL _outgoingMailServerUseSSL;
    NSString *_outgoingMailServerUsername;
    NSString *_outgoingPassword;
    BOOL _outgoingPasswordSameAsIncomingPassword;
}

@property(readonly) NSString * emailAccountDescription;
@property(readonly) NSString * emailAccountName;
@property(readonly) NSString * emailAccountType;
@property(readonly) NSString * emailAddress;
@property(readonly) NSString * incomingMailServerAuthentication;
@property(readonly) NSString * incomingMailServerHostname;
@property(readonly) NSString * incomingMailServerIMAPPathPrefix;
@property(readonly) NSNumber * incomingMailServerPortNumber;
@property(readonly) BOOL incomingMailServerUseSSL;
@property(readonly) NSString * incomingMailServerUsername;
@property(readonly) NSString * incomingPassword;
@property(readonly) NSString * outgoingMailServerAuthentication;
@property(readonly) NSString * outgoingMailServerHostname;
@property(readonly) NSNumber * outgoingMailServerPortNumber;
@property(readonly) BOOL outgoingMailServerUseSSL;
@property(readonly) NSString * outgoingMailServerUsername;
@property(readonly) NSString * outgoingPassword;
@property(readonly) BOOL outgoingPasswordSameAsIncomingPassword;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)profileNameFromAccountTag:(id)arg1;
+ (id)typeStrings;

- (void)dealloc;
- (id)description;
- (id)emailAccountDescription;
- (id)emailAccountName;
- (id)emailAccountType;
- (id)emailAddress;
- (id)incomingMailServerAuthentication;
- (id)incomingMailServerHostname;
- (id)incomingMailServerIMAPPathPrefix;
- (id)incomingMailServerPortNumber;
- (BOOL)incomingMailServerUseSSL;
- (id)incomingMailServerUsername;
- (id)incomingPassword;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)outgoingMailServerAuthentication;
- (id)outgoingMailServerHostname;
- (id)outgoingMailServerPortNumber;
- (BOOL)outgoingMailServerUseSSL;
- (id)outgoingMailServerUsername;
- (id)outgoingPassword;
- (BOOL)outgoingPasswordSameAsIncomingPassword;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end