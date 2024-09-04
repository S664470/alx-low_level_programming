#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check for alphabet
 * @c: the charecter to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
