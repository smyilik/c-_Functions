#include "str_easy.h"

void itc_print_copy_str(string str, int number)
{
	while (number > 0) {
		number--;
		cout << str;
	}
}