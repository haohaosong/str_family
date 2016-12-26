#pragma once

char* my_strcpy(char* des,const char* src)
{
	char* start = des;
	
	//依次拷贝，这种写法可以拷贝最后的'\0'
	while (*des++ = *src++)
	{}

	return start;
} 
