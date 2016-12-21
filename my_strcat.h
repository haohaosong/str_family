#pragma once

char* my_strcat(char* str1, const char*str2)
{
	char* ret = str1;

	//循环找到str1的'\0'处
	while (*str1)
		str1++;

	//这样写可以把'\0'拷贝过去
	while (*str1++ = *str2++)
	{}

	//返回str1串头的地址
	return ret;
} 
