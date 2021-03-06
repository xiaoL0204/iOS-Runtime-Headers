/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportElement : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NTPBFeedViewportGap * _pbGap;
    NTPBFeedViewportGroup * _pbGroup;
    int  _type;
}

@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasPbGap;
@property (nonatomic, readonly) BOOL hasPbGroup;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NTPBFeedViewportGap *pbGap;
@property (nonatomic, retain) NTPBFeedViewportGroup *pbGroup;
@property (nonatomic) int type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (BOOL)hasPbGap;
- (BOOL)hasPbGroup;
- (BOOL)hasType;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pbGap;
- (id)pbGroup;
- (BOOL)readFrom:(id)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPbGap:(id)arg1;
- (void)setPbGroup:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
