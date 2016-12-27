#pragma once 

size_t my_strcmp(const char* str1, const char* str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			break;

		str1++;
		str2++;
	}

	//∑µªÿ≤Ó÷µ
	return *str1 - *str2;
}
