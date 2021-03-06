/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIDirectionsButtonViewController : SearchUIAccessoryViewController {
    float  _latitude;
    float  _longitude;
    NSData * _mapsData;
    NSString * _name;
}

@property float latitude;
@property float longitude;
@property (retain) NSData *mapsData;
@property (retain) NSString *name;

+ (BOOL)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (void)buttonPressed;
- (float)latitude;
- (float)longitude;
- (id)mapsData;
- (id)name;
- (void)setLatitude:(float)arg1;
- (void)setLongitude:(float)arg1;
- (void)setMapsData:(id)arg1;
- (void)setName:(id)arg1;
- (id)setupViewWithStyle:(unsigned int)arg1;
- (void)updateWithResult:(id)arg1;

@end
