#include <unistd.h>
#include <stdio.h>

/**
 * main - entry point
 * Discription: prints all possible different combinations of two digits
 * Return: (0)
 **/

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				/*(i != '8' || (i == '8' &&*/
				if (i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
