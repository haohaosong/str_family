#pragma once

char* my_strcat(char* str1, const char*str2)
{
	char* ret = str1;

	//ѭ���ҵ�str1��'\0'��
	while (*str1)
		str1++;

	//����д���԰�'\0'������ȥ
	while (*str1++ = *str2++)
	{}

	//����str1��ͷ�ĵ�ַ
	return ret;
} 
