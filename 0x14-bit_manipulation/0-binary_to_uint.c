#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * FILE: to convert binary to unsigned integer
 *
 * AUTHER: Shahenda Altayeb
 *
 * RETURN: 0 success
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	if (b == 0)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		n = ((n << 1) + (*b - '0'));
		b++;
	}
	return (n);
}
