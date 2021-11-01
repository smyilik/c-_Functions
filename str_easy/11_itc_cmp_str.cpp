#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num)
{
	if ((num < 0) || (num > itc_len(str1) - 1)) {
		return "-1";
	}
	else if (str2 == "") {
		return (str1);
	}
	string otv = "";
	long long i = 0, st2 = itc_len(str2), z = 0, st1 = itc_len(str1);
	while (i < num) {
		otv += str1[i];
		i++;
	}
	while (z < st2) {
		otv += str2[z];
		z++;
	}
	while (i < st1) {
		otv += str1[i];
		i++;
	}
	return (otv);
}