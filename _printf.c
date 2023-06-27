#include <stdarg.h>
#include <stdio.h>
#include "main.h"
int _printf(const char *format, ...)
{
	int i = 0;
	char a;
	int n;
	unsigned int b;
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
			}
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
			else if (a == 'd' || a == 'i' )                         {
				n = va_arg(list, int);
				digits(n);
				i++;                                            }
			else if (a == 'b')
			{
				b = va_arg(list, unsigned int);
				i += binary(b);
			}
			else
			{

			}
		}
		else
		{
			putchar(a);
			i++;
		}
		a = *format;
	}
	va_end(list);
	return (i);
}
