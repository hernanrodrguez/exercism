#ifndef PANGRAM_H
#define PANGRAM_H

#include <stdbool.h>
#include <stdio.h>

bool is_pangram(const char* sentence);
bool check_letters(const char* str);
void copy_str(const char* ori, char* cpy);
void get_letters(const char* str, char* letters);
bool contains(const char* str, char c);
bool is_letter(char c);
void append(char* str, char c);
char to_lowercase(char c);

#endif
