#pragma once 

void* my_memcpy(void* des,const void* src,size_t num)
{
	char* pdest = (char*)des;
	char* psrc = (char*)src;

	//memcpy�������ص����
	while(num--)
	{
		*(pdest+num) = *(psrc+num);
	}

	return des;
}
