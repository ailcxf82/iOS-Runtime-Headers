/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCurrencyAmount : PBCodable <NSCopying> {
    PBUnknownFields * _unknownFields;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *values;

+ (id)options;
+ (Class)valueType;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (void)clearValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setValues:(id)arg1;
- (id)unknownFields;
- (id)valueAtIndex:(unsigned int)arg1;
- (id)values;
- (unsigned int)valuesCount;
- (void)writeTo:(id)arg1;

@end
