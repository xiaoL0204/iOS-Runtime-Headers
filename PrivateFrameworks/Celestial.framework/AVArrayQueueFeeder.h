/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray;



@interface AVArrayQueueFeeder : AVQueueFeeder 
{
    NSMutableArray *_items;
}


- (NSUInteger)itemCount;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)initWithArray:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (id)pathAtIndex:(NSUInteger)arg1;
- (id)itemForIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfPaths;
- (void)shuffleWithCurrentIndex:(NSUInteger)arg1;

@end