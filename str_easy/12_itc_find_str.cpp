#include "str_easy.h"

int itc_find_str(string str1, string str2)
{
	long long ind = 0, st1 = itc_len(str1), st2 = itc_len(str2), otv = -1;
	for (int i = 0; i < st1; i++) {
		if (str1[i] == str2[0]) {
			otv = i;
			for (int j = 0; j < st2; j++) {
				if (str1[j + i] == str2[ind]) {
					ind++;
				}
				else {
					ind = 0;
					break;
				}
			}
		}
		if (ind == st2) {
			break;
		}
	}
	return(otv);
}