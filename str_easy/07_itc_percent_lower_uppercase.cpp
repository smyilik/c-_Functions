#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
	double stro = 0, zag = 0, i = 0;
	while (i < itc_len(str)) {
		if ((str[i] >= 65) && (str[i] <= 90)) {
			zag++;
		}
		else if ((str[i] >= 97) && (str[i] <= 122)) {
			stro++;
		}
		i++;
	}
	return(stro / zag);
}
