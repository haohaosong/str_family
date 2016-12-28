#pragma once 

char* my_strrchr(const char* str,int character)
{
	//利用ret保存最后一个匹配的字符地址
	char* ret = NULL;

	while (*str)
	{
		//匹配，保留该地址
		if (*str == character)
			ret = str;

		str++;
	}

	//返回最后一次匹配的地址
	return ret;
}
