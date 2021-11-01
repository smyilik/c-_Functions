#include "str_easy.h"

string itc_reverse_str(string str)
{
	string sndstr;
	long long i = itc_len(str) - 1;
	while (itc_len(sndstr) != itc_len(str)) {
		sndstr = sndstr + str[i];
		i--;
	}
	return (sndstr);
}