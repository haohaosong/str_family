#pragme once
 
char* my_strstr(const char* src,const char* charset)
{
	char* str1 = (char*)src;
	char* str2 = (char*)charset;
	char* ret = NULL;
	for (;*str1 != '\0'; str1++)
	{
		ret = str1;//��str1�������� 
		if (*str1 == *str2)
		{
			for (str2 = charset; *str1 == *str2; str1++, str2++)
			{}
			//���str2�Ƿ���� 
			if (*str2 == '\0')
				return ret;
			else
				str1 = ret;//��str1��Ϊ����֮ǰ������ 
		}
	}
	return NULL;
} 
 
char* my_strstr(const char* str, const char* substr)
{
	char* start = (char*)str;//��Ҫ���ҵĴ��Ŀ�ʼ
	char* substart = (char*)substr;//�Ӵ��Ŀ�ʼ
	char* cp = (char*)str;//����

	while (*cp)
	{
		//��ס��ʼ��λ��
		start = cp;

		//ƥ��
		while (*start && *substart && *start == *substart)
		{
			start++;
			substart++;
		}

		//�ж��Ӵ��Ƿ����
		if (*substart == '\0')
			return cp;

		//��ԭ
		cp++;
		substart = substr;
	}
	return NULL;
}
