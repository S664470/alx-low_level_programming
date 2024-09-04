#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, j, k;

	i = 0;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
