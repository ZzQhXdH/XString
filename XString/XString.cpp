#include "XString.h"


 XString::~XString()
 {
	delete[] data;
 }

XString::XString(void)
{
	
}

XString::XString(const char *str)
{
	int len = strlen(str);
	data = new char[len + 1];
	strcpy(data, str);
}

XString::XString(int number)
{
	
}

XString::XString(char c, int len)
{
	
}

char* XString::strcpy(char *target, const char *source)
{
	while ((*target = *source) != '\0')
	{
		target ++;
		source ++;
	}

	return target;
}

int XString::strlen(const char *target)
{
	int len = 0;
	
	while (*target != '\0')
	{
		len ++;
	}

	return len;
}































