#include "str_easy.h"

int itc_max_char_on_end(string str)
{
	cout << str << endl;
	long long i = 1, nol = 1, check = 0, leni = itc_len(str);
	bool b1, b2;
	while (i <= leni) {
		b1 = ((int(str[i]) >= 48) && (int(str[i]) <= 57));
		b2 = ((int(str[i - 1]) >= 48) && (int(str[i - 1]) <= 57));
		if (b1 && b2) {
			check = 1;
			nol++;
		}
		else if (!b1 && !b2 && (nol != 1)) {
			return (nol);
		}
		i++;
	}
	if (check == 0) {
		return 0;
	}
	return (nol);
}