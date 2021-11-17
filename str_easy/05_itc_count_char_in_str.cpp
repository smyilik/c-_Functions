#include "str_easy.h"

int itc_count_char_in_str(char ch, string str)
{
	long long len = itc_len(str), nol = 0;
	while (len > 0) {
		if (str[len - 1] == ch) {
			nol++;
		}
		len--;
	}
	return (nol);
}
