#include "middle_str.h"

int itc_kol_slov(string str)
{
	long long len = itc_len(str), kol = 1;
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			kol++;
		}
	}
	return kol;
}