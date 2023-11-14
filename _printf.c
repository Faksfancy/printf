#include "main.h"
/**
 *  _printf - print to stout formatted text
 *  @format: format specifier
 *  Return: no of bytes printed
*/

int _printf(const char *format, ...)
{
	unsigned int n, s_num, num = 0;

	va_list args;

	if (format == NULL)
		return (0);

	va_start(args, format);

	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] != '%')
		{
			putcharr(format[n]);
		}
		else if (format[n + 1] == 'c')
		{
			putcharr(va_arg(args, int));
			n++;
		}
		else if (format[n + 1] == 's')
		{
			s_num = putts(va_arg(args, char *));
			n++;
			num += (s_num - 1);
		}
		else if (format[n + 1] == '%')
		{
			putcharr('%');
		}
		num += 1;
	}
	va_end(args);
	return (num);
}
