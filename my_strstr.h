#pragme once
 
char* my_strstr(const char* src,const char* charset)
{
	char* str1 = (char*)src;
	char* str2 = (char*)charset;
	char* ret = NULL;
	for (;*str1 != '\0'; str1++)
	{
		ret = str1;//将str1保留下来 
		if (*str1 == *str2)
		{
			for (str2 = charset; *str1 == *str2; str1++, str2++)
			{}
			//检查str2是否结束 
			if (*str2 == '\0')
				return ret;
			else
				str1 = ret;//将str1置为进来之前的样子 
		}
	}
	return NULL;
} 
 
char* my_strstr(const char* str, const char* substr)
{
	char* start = (char*)str;//需要查找的串的开始
	char* substart = (char*)substr;//子串的开始
	char* cp = (char*)str;//变量

	while (*cp)
	{
		//记住开始的位置
		start = cp;

		//匹配
		while (*start && *substart && *start == *substart)
		{
			start++;
			substart++;
		}

		//判断子串是否结束
		if (*substart == '\0')
			return cp;

		//还原
		cp++;
		substart = substr;
	}
	return NULL;
}
