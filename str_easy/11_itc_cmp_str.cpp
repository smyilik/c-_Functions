#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num)
{
    string str, str_;
    long long len1 = itc_len(str1), len2 = itc_len(str2);
    if ((len1 < num) || (num < 0)) {
        return str1;
    }
    for (int i = 0; i < num; i++) {
        str += str1[i];
    }
    for (int i = 0; i < len2; i++) {
        str += str2[i];
    }
    for (int i = num; str1[i] != '\0'; i++) {
        str += str1[i];
    }
    for (int i = 0; i < len1; i++) {
        str_ += str[i];
    }
    return str_;
}
