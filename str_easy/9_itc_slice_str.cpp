#include "str_easy.h"

string itc_slice_str(string str, int start, int end)
{
    long long len = itc_len(str);
    if (start > end) {
        return str;
    }
    string str2 = "";
    if (end >= len) {
        end = len - 1;
    }
    for (int i = start; i != end + 1; i++) {
        str2 += str[i];
    }
    return str2;
}
