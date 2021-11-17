#include "middle_str.h"

string itc_maxCharWord(string str)
{
	long long max = 0, len = itc_len(str);
	string temp, otv;
	if (itc_countWords(str) == 1) return "error";
	for (int i = 0; i < len; i++) {
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'À') && (str[i] <= 'ß')) ||
			((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'à') && (str[i] <= 'ÿ'))) {
			temp += str[i];
		}
		else if (itc_len(temp) > max) { cout << i << endl; max = itc_len(temp); otv = temp; temp = ""; }
		else temp = "";
	}
	if (itc_len(temp) > max) { otv = temp; }
	return otv;
}