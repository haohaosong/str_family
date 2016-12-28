#pragma once

char* my_strncat(char* str1, char*str2,size_t count)
{
	char* start = str1;

	//找到str1的末位
	while (*str1)
		str1++;

	while (count-- && *str2)
	{
		*str1++ = *str2++;
	}

	//在最后补0
	*str1 = '\0';

	return start;
} 
