#include "str_easy.h"

bool is_str2_in_str1(string str1, string str2)
{
	long long ind = 0, i = 0;
	string otv = "";
	while (i < itc_len(str1)) {
		if (str1[i] == str2[ind]) {
			otv += str1[i];
			ind++;
		}
		if ((otv != "") && (str1[i] != str2[ind])) {
			return true;
		}
		i++;
	}
	return false;
}

long long itc_abs(long long a)
{
	if (a < 0) {
		a *= -1;
	}
	return (a);
}

bool is_num(string a) {
	bool b = false;
	long long st = itc_len(a);
	for (int i = 0; i < st; i++) {
		b = (int(a[i]) >= 48) && (int(a[i]) <= 57);
		if (!b) {
			return false;
		}
	}
}