#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>

namespace nucleotide_count {

    using namespace std;

    class counter{
        public:
            counter(const char* str);
            map<char,int> nucleotide_counts() const;
            int count(const char c) const;
        private:
            map<char,int> my_map;
    };

}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H