/**
 * @brief XString类
 *
 */

class XString
{
public:
	XString(void);
	XString(const char *str);
	XString(int number, int base = 10);
	XString(char c, int len);
	
	~XString();
	
	int toInt(void);
	double toDouble(void);

	static char* strcpy(char *target, const char *source);
	static int strlen(const char *target);
	static int numberlen(int number, int base = 10);
	static void charset(const char *s, char c, int len);
	static void fromInt(char *target, int number, int base = 10);

	static XString* fromInt(int number, int base = 10);
	static XString* fromDouble(double value);
	static XString* fromFloat(float value);
	
private:
	char *data;
	
	static const char HexNumberList[];
};

