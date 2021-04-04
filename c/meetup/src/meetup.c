#include "meetup.h"

/*
struct tm {
    // seconds,  range 0 to 59
    int tm_sec;
  
    // minutes, range 0 to 59
    int tm_min;
  
    // hours, range 0 to 23
    int tm_hour;
  
    // day of the month, range 1 to 31
    int tm_mday;
  
    // month, range 0 to 11
    int tm_mon;
  
    // The number of years since 1900
    int tm_year;
  
    // day of the week, range 0 to 6
    int tm_wday;
  
    // day in the year, range 0 to 365
    int tm_yday;
  
    // daylight saving time
    int tm_isdst;
}
*/

uint8_t meetup_day_of_month(uint16_t year, uint8_t month, const char* card_week, const char* day){
    uint8_t wday = get_day(day);
    uint8_t week = get_week(card_week);
    return get_mday(wday, week, month, year-1900);
}

uint8_t get_mday(uint8_t wday, uint8_t week, uint8_t month, uint8_t year){
    struct tm day = { .tm_mon = month-1, .tm_year = year };
    struct tm* ptr;
    time_t rawtime;
    switch(week){
        case 0:
        case 1:
        case 2:
        case 3:
            for(uint8_t i = (week*7)+1; i < (week*7)+8; i++){
                day.tm_mday = i;
                rawtime = mktime(&day);
                ptr = localtime(&rawtime);
                if(ptr->tm_wday == wday)
                    return ptr->tm_mday;                
            }
            break;
        case 4:
            for(uint8_t i=13; i<20; i++){
                day.tm_mday = i;
                rawtime = mktime(&day);
                ptr = localtime(&rawtime);
                if(ptr->tm_wday == wday)
                    return ptr->tm_mday;
            }
            break;
        case 5:
            for(uint8_t i=31; i>20; i--){
                day.tm_mday = i;
                day.tm_mon = month-1;
                rawtime = mktime(&day);
                ptr = localtime(&rawtime);
                printf("%s", asctime(ptr));
                if(ptr->tm_wday == wday && ptr->tm_mon == month-1)
                    return ptr->tm_mday;                
            }
            break;
        default:
            break;
    }
    return 0;
}

uint8_t get_day(const char* day){
    static char *weekday[] = {
        "Sunday",   "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"    
    };
    
    for(uint8_t i=0; i<7; i++){
        if(strcmp(day, weekday[i]) == 0)
            return i;
    }
    return 255;
}

uint8_t get_week(const char* week){
    static char *cardweek[] = {
        "first", "second", "third", "fourth", "teenth", "last"
    };

    for(uint8_t i=0; i<6; i++){
        if(strcmp(week, cardweek[i]) == 0)
            return i;
    }
    return 255;
}
