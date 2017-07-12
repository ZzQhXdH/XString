/**
 * @brief XString类
 *
 */

class XString
{
public:
	XString(void);
	XString(const char *str);
	XString(int number);
	XString(char c, int len);
	
	~XString();

	static char* strcpy(char *target, const char *source);
	static int strlen(const char *target);
	static int numberlen(int number, int base = 10);

	static QString fromInt(int number, int base = 10);
	static QString fromDouble(double value);
	static QString fromFloat(float value);


private:
	char *data;

};

