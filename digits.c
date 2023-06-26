#include <stdarg.h>
#include <stdio.h>
#include "main.h"
int digits(const char *format, ...)
{
	int i = 0;
	char d;
	int n, x, y;
	int digit;
	va_list list;
	va_start(list, format);

	d = *format;

	while (d != '\0')
	{
		format++;
		if (d == '%')
		{
			d = *format;
			format++;
			if (d == 'd' || d == 'i' )
			{
				n = va_arg(list, int);
				y = n;
				while (y != 0)
				{
					x++;
					y /= 10;
				}
				if (n < 0)
				{
					putchar('-');
					i++;
					n = -n;
				}
				for (int z = x - 1; z >= 0; z--)
				{
					digit = (n / (int)pow(10, i)) % 10;
					putchar('0' + digit);
					i++;
				}
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
