#include <stdio.h>
#include "holberton.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int decimal_value = 0;
    int i;

    if (!b)
        return 0;

    for (i = 0; b[i]; i++)
    {
        if (b[i] == '0')
            decimal_value = (decimal_value << 1) | 0;
        else if (b[i] == '1')
            decimal_value = (decimal_value << 1) | 1;
        else
            return 0;
    }
    return decimal_value;
}
