#include "str_easy.h"

bool itc_equal_reverse(string str)
{
	return (str == itc_reverse_str(str));
}