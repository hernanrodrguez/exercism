#ifndef ACRONYM_H
#define ACRONYM_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char* abbreviate(const char *phrase);
char to_uppercase(char c);
uint8_t is_separator(char c);
uint8_t is_letter(char c);

#endif
