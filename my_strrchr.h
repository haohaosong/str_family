#pragma once 

char* my_strrchr(const char* str,int character)
{
	//����ret�������һ��ƥ����ַ���ַ
	char* ret = NULL;

	while (*str)
	{
		//ƥ�䣬�����õ�ַ
		if (*str == character)
			ret = str;

		str++;
	}

	//�������һ��ƥ��ĵ�ַ
	return ret;
}
