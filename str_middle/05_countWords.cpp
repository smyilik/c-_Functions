#include "middle_str.h"

int itc_countWords(string str)
{
	unsigned char prev;
	long long len = itc_len(str), kol;
	if (((str[0] >= 'A') && (str[0] <= 'Z')) || ((str[0] >= '�') && (str[0] <= '�')) || ((str[0] >= 'a') && (str[0] <= 'z')) || ((str[0] >= '�') && (str[0] <= '�'))) kol = 1;
	else kol = 0;
	for (int i = 1; i < len; i++) {
		if ((!(((str[i - 1] >= 'A') && (str[i - 1] <= 'Z')) || ((str[i - 1] >= '�') && (str[i - 1] <= '�')) || ((str[i - 1] >= 'a') && (str[i - 1] <= 'z')) || ((str[i - 1] >= '�') && (str[i - 1] <= '�')))) && (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= '�') && (str[i] <= '�')) || ((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= '�') && (str[i] <= '�')))) {
			kol++;
		}
	}
	return kol;
}