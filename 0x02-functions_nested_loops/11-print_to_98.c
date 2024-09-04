#include "main.h"

/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 * @n: number to print it from
 * Return: 0
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n);
			_putchar(',');
		}
	}
}
