#if !defined(ISOGRAM_H)
#define ISOGRAM_H

namespace isogram {
    bool is_isogram(const char* str);
    int str_length(const char* str);
    bool check_letter(char* str, char letter);
    char to_lowercase(char c);
}  // namespace isogram

#endif // ISOGRAM_H