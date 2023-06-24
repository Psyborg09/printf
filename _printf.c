#include "main.h"
int _printf(const char *format, ...)
{
	int i = 0;
	char a;
	const char *str;
	va_list list;
	va_start(list, format);

	a = *format;

	while (a != '\0')
	{
		format++;
		if (a == '%')
		{
			a = *format;
			format++;
			if (a == 'c')
			{
				putchar(va_arg(list, int));
				i++;
			else if (a == 's')
			{
				str = va_arg(list, const char *);
				while (*str != '\0')
				{
					putchar(*str);
					str++;
					i++;
				}
			}
			else if (a == '%')
			{
				putchar('%');
				i++;
			}
			else
			{

			}
			}
		}
		else
		{
			putchar(c);
			i++;
		}
	}
	va_end(list);
	return (i);
}
