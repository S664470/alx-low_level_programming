#include <unistd.h>
#include <stdio.h>

/**
 * main - intry point
 * Discription: prints the lowercase alphabet in reverse
 * Return: (0) allways
 */

int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
