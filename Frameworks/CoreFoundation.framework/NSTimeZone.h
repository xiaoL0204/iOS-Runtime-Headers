/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *name;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)abbreviationDictionary;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultTimeZone;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)resetSystemTimeZone;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (void)setDefaultTimeZone:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)systemTimeZone;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(int)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;

- (unsigned long)_cfTypeID;
- (id)abbreviation;
- (id)abbreviationForDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (double)daylightSavingTimeOffset;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (BOOL)isDaylightSavingTime;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTimeZone:(id)arg1;
- (BOOL)isNSTimeZone__;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransition;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (int)secondsFromGMT;
- (int)secondsFromGMTForDate:(id)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)calendarTimeZone;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)cityName;
- (void)setCityName:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (BOOL)vs_isTimeZoneSet;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)descriptionForDate:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1;
- (BOOL)isUTC;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

+ (id)gmt;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (BOOL)_navigation_hasSameOffsetFromGMTAsTimeZone:(id)arg1;
- (BOOL)_navigation_isEquivalentToTimeZone:(id)arg1 forDate:(id)arg2;
- (BOOL)_navigation_isEquivalentToTimeZone:(id)arg1 forDates:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (id)ICSComputeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;

@end
