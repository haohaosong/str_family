#pragma once

/*可以处理重叠的情况*/
void* my_memmove(void* des, void* src, size_t count)
{
	char* pdest = (char*)des;
	char* psrc = (char*)src;

	if (psrc>pdest)//从前向后拷贝
	{
		while (count--)
			*pdest++ = *psrc++;
	}
	else//从后向前拷贝
	{
		while (count--)
			*(pdest + count) = *(psrc + count);
	}
	return des;
} 
