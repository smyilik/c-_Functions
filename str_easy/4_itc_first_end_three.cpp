#include "str_easy.h"

void itc_first_end_three(string str)
{
	long long a = itc_len(str);
	if (a > 5) {
		cout << str[0] << str[1] << str[2] << str[a - 3] << str[a - 2] << str[a - 1];
	}
	else {
		while (a > 0) {
			cout << str[0];
			a--;
		}
	}
}