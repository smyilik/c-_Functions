#include "str_easy.h"

int itc_max_char_on_end(string str)
{
	long long len = itc_len(str), max = 0;
	int kol = 0;
	for (int i = 0; i < len; i++) {
		if ((str[i] >= '0') && (str[i] <= '9')) {
			kol++;
		}
		else if (kol > max) {
			max = kol;
			kol = 0;
		}
		else {
			kol = 0;
		}
	}
	if (kol > max) {
		return kol;
	}
	return max;
}
