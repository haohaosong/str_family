#pragma once 

size_t my_strncmp(const char* str1, const char* str2,size_t count)
{
	//��Ҫ��ѭ�����Σ���--count
	while (--count)
	{
		//�����Ⱦͼ��������
		//��������ѭ��
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
	//�������һ����ͬ�ַ��Ĳ�
	return *str1 - *str2;
}
