#pragme once
 
size_t my_strlenNonR(const char* str)
{
	size_t count = 0;

	//ÅĞ¶ÏÊÇ·ñÎª'\0'
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}

size_t my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;

	return my_strlen(str + 1)+1;
}
