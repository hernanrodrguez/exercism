#ifndef MEETUP_H
#define MEETUP_H

#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

enum days{SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
enum months{JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

uint8_t meetup_day_of_month(uint16_t year, uint8_t month, const char* card_week, const char* day);
uint8_t get_mday(uint8_t wday, uint8_t week, uint8_t month, uint8_t year);
uint8_t get_day(const char* day);
uint8_t get_week(const char* week);

#endif
