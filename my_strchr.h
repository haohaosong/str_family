#pragma once

char* my_strchr(const char* str,int character)
{
	//������ʼλ�÷���
	char* start = str;

	while (*str)
	{
		//�ַ�ƥ�䣬����
		if (*str == character)
			return str;

		//��ƥ�䣬������
		str++;
	}
	return NULL;
}
