/* Generated by RuntimeBrowser.
 */

@protocol _HKActiveWorkoutClient <NSObject>

@required

- (void)serverFailedWithError:(NSError *)arg1;
- (void)serverPausedWithDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)serverStoppedWithDate:(NSDate *)arg1;
- (void)updateTotalsWithQuantities:(NSDictionary *)arg1 resumeData:(NSDictionary *)arg2 UUIDs:(NSArray *)arg3;

@end