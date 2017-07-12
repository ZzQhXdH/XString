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

	static char* strcpy(char *target, const char *source);

private:
	char *data;

};

