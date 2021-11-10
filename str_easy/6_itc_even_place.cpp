#include "str_easy.h"

string itc_even_place(string str)
{
	if (itc_len(str) <= 1) {
		return "-1";
	}
	string sndstr = "";
	long long nol = 0, len = itc_len(str) - 1;
	while (nol <= len) {
		if ((nol + 1) % 2 == 0) {
			sndstr = sndstr + str[nol];
		}
		nol++;
	}
	return (sndstr);
}