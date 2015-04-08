/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand {
}

@property(copy) NSArray * personSearches;
@property(copy) NSNumber * resultsLimit;

+ (id)multiPersonSearch;
+ (id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)personSearches;
- (BOOL)requiresResponse;
- (id)resultsLimit;
- (void)setPersonSearches:(id)arg1;
- (void)setResultsLimit:(id)arg1;

@end