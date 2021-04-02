#if !defined(ETL_H)
#define ETL_H

#include <iostream>
#include <vector>
#include <string>
#include <map>

namespace etl {

    using namespace std;

    map<char, int> transform(map<int, vector<char>> old);
    char to_lowercase(char c);

}  // namespace etl

#endif // ETL_H