#include <unistd.h>
#include <stdio.h>

/**
 * main - entry point
 * Discription: prints all possible combinations of single-digit numbers
 * Return: (0)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
