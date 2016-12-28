#pragma once

char* my_strchr(const char* str,int character)
{
	//保留开始位置返回
	char* start = str;

	while (*str)
	{
		//字符匹配，返回
		if (*str == character)
			return str;

		//不匹配，往后走
		str++;
	}
	return NULL;
}
