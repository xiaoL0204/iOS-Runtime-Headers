/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class NSMutableArray, NSString;

@interface CalendarEventEditModel : NSObject {
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct { 
        unsigned int dirty : 1; 
        unsigned int datesDirty : 1; 
        unsigned int calendarDirty : 1; 
        unsigned int alarmsDirty : 1; 
        unsigned int recurrencesDirty : 1; 
        unsigned int statusDirty : 1; 
        unsigned int commentDirty : 1; 
        unsigned int extra : 25; 
    NSMutableArray *_alarms;
    BOOL _allDay;
    void *_calendar;
    NSInteger _calendarId;
    NSString *_comment;
    struct CalDatabase { } *_database;
    void *_event;
    NSInteger _eventId;
    } _modelFlags;
    struct CalEventOccurrence { } *_occurrence;
    } _occurrenceDateGr;
    } _occurrenceEndDateGr;
    NSMutableArray *_recurrences;
    NSInteger _status;
}

+ (id)_externalChangeUserInfoDict;

- (id)_alarmEditModels;
- (id)_recurrenceEditModels;
- (void)addAlarmEditModel:(id)arg1;
- (void)addRecurrenceEditModel:(id)arg1;
- (id)alarmEditModels;
- (void*)calendar;
- (void)commit;
- (struct CalDatabase { }*)database;
- (void)dealloc;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDate;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (void*)event;
- (id)initWithDatabase:(struct CalDatabase { }*)arg1;
- (id)initWithOccurrence:(struct CalEventOccurrence { }*)arg1;
- (BOOL)isAllDay;
- (struct CalEventOccurrence { }*)occurrence;
- (id)recurrenceEditModels;
- (void)removeAlarmEditModelAtIndex:(NSInteger)arg1;
- (void)removeRecurrenceEditModelAtIndex:(NSInteger)arg1;
- (void)replaceAlarmEditModelAtIndex:(NSInteger)arg1 withAlarmEditModel:(id)arg2;
- (void)replaceRecurrenceEditModelAtIndex:(NSInteger)arg1 withRecurrenceEditModel:(id)arg2;
- (id)responseComment;
- (BOOL)revalidate;
- (void)setAllDay:(BOOL)arg1;
- (void)setCalendar:(void*)arg1;
- (void)setEndDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setOccurrence:(struct CalEventOccurrence { }*)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStartDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setStatus:(NSInteger)arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDate;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (NSInteger)status:(BOOL*)arg1;
- (NSInteger)status;

@end