#pragma once

/*���Դ����ص������*/
void* my_memmove(void* des, void* src, size_t count)
{
	char* pdest = (char*)des;
	char* psrc = (char*)src;

	if (psrc>pdest)//��ǰ��󿽱�
	{
		while (count--)
			*pdest++ = *psrc++;
	}
	else//�Ӻ���ǰ����
	{
		while (count--)
			*(pdest + count) = *(psrc + count);
	}
	return des;
} 
