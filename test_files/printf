#include <stdarg.h>
#include <stdio.h>
#include "main.h"
int digits(const char *format, ...)
{
	int i = 0;
	char d;
	int n, y, z;
	int x = 0;
	int divisor;
	int j;
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
				for (z = x - 1; z >= 0; z--)
				{
					divisor = 1;
    for (j = 1; j < x; j++)
    {
        divisor *= 10;
    }

    while (divisor != 0)
    {
        digit = n / divisor;
        putchar('0' + digit);
        i++;
        n %= divisor;
        divisor /= 10;
    }
				}
			}
			else
			{

			}
		}
		else
		{
			putchar(d);
			i++;
		}
		d = *format;
	}
	va_end(list);
	return (i);
}
