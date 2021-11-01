#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3)
{
	long long st1 = itc_len(str1), st2 = itc_len(str2), st3 = itc_len(str3), find = itc_find_str(str1, str2);
	string otv = "", fin = "";
	for (int i = 0; i < st1; i++) {
		if (i == find) {
			otv += str3;
			for (int j = (i + st2); j < st1; j++) {
				fin += str1[j];
			}
			str1 = fin;
			find = itc_find_str(str1, str2);
			st1 = itc_len(str1);
			i = 0;
		}
		otv += str1[i];
	}
	return (otv);
}