#include <stdio.h>
#include "main.h"
void digits(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n >= 10)
	{
		digits(n / 10);
	}

	putchar('0' + n % 10);
}
