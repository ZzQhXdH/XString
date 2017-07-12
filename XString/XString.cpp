#include "XString.h"


char XString::HexNumberList[] = 
{
	'0', '1', '2', '3',
	'4', '5', '6', '7',
	'8', '9', 'A', 'B',
	'C', 'D', 'E', 'F',
};


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

XString::XString(int number, int base)
{
	int len = numberlen(number);

	data = new char[len + 1];
	fromInt(data, number, base);
}

XString::XString(char c, int len)
{
	data = new char[len + 1];
	charset(data, c, len);

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

int XString::numberlen(int number, int base)
{
	int len = 1;

	while (number /= base)
	{
		len ++;
	}

	return len;
}

void XString::fromInt(char *target, int number, int base)
{
	for (int i = 0; i < len; i ++)
	{
		target[len - i - 1] = HexNumberList[number % base];
		number /= base;
	}
	target[len] = '\0';
}

void XString::charset(char *s, char c, int len)
{
	while (len --)
	{
		*s = c;
		s ++;
	}
}

XString* XString::fromInt(int number, int base)
{
	return new XString(number, base);
}























