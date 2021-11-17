#include "middle_str.h"

string itc_DecToBin(string str)
{
	string otv = "", chislo = "";
	long long len = itc_len(str) + 1;
	for (int i = 0; i < len; i++) {
		if (((str[i] < '0') || (str[i] > '9')) && (chislo != "")) {
			otv += itc_covert_num(itc_stoi(chislo), 2);
			chislo = "";
			if (i != len - 1) otv += str[i];
		}
		else if ((str[i] < '0') || (str[i] > '9')) otv += str[i];
		else chislo += str[i];
	}
	return otv;
}