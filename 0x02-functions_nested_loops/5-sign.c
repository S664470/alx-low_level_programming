#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: The number to print its sign
 * Return: 1, 0 or -1 according to the numbers sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)

		_putchar('-');
	return (-1);
}
