#include "str_easy.h"

string itc_slice_str(string str, int start, int end)
{
	if ((start > end) || (start >= itc_len(str))) {
		return str;
	}
	string sndstr;
	long long i = start;
	if (start > end) {
		return str;
	}
	if (end >= itc_len(str)) {
		end = itc_len(str);
	}
	while (i < end + 1) {
		sndstr += str[i];
		i++;
	}
	return (sndstr);
}