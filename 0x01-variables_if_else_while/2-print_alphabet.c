#include <unistd.h>
#include <stdio.h>

/**
 * main - entry point
 * Discription: print the alphabet in lowercase
 * Return: (0) in success
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

return (0);
}
