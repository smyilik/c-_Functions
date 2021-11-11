#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3)
{
	string str = "";
	long long len1 = itc_len(str1), len2 = itc_len(str2), len3 = itc_len(str3), kol = 0;
	for (int i = 0; i < len1; i++) {
		if (str1[i] == str2[0]) {
			for (int j = i; j < i + len2; j++) {
				if (str1[j] == str2[j - i]) {
					kol++;
				}
				else {
					break;
				}
			}
			if (kol == len2) {
				i += len2 - 1;
				str += str3;
			}
			else {
				str += str1[i];
			}
			kol = 0;
		}
		else {
			str += str1[i];
		}
	}
	return str;
}
