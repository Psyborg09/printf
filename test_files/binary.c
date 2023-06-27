#include "main.h"
#include <stdio.h>
int binary(unsigned int u)
{
        int i = 0;
        unsigned long k;
        unsigned long j;

        if (u == 0)
        {
                _putchar('0');
                return(1);
        }
        k = (sizeof(unsigned int) * 8 - 1);
        j = 1lu << k;
        while (j > 0)
        {
                if (u & j)
                {
                        _putchar((u & j) ? '1' : '0');
                        i++;
                }
                else if (i > 0)
                {
                       _putchar('0');
                        i++;
                }
                j >>= 1;
        }
        return (i);
}
