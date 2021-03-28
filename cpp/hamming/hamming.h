#if !defined(HAMMING_H)
#define HAMMING_H

#include <stdexcept>

namespace hamming {
    int compute(const char* str1, const char* str2);
    int str_length(const char* str);
}  // namespace hamming

#endif // HAMMING_H