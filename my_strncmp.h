#pragma once 

size_t my_strncmp(const char* str1, const char* str2,size_t count)
{
	//需要少循环依次，是--count
	while (--count)
	{
		//如果相等就继续向后走
		//否则跳出循环
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
		{
			break;
		}
	}
	//返回最后一个不同字符的差
	return *str1 - *str2;
}
