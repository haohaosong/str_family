#pragma once 

char* my_strncpy(char* str1,const char* str2,size_t count)
{
	char* start = str1;

	//���ο���countλ
	while (count--)
	{
		*str1++ = *str2++;
	}

	return start;
}
