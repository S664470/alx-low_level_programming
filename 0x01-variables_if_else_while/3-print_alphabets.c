#include <unistd.h>
#include <stdio.h>

/**
 * main - entry point
 * Discription: prints the alphabet in lowercase, and then in uppercase
 * Return: (0) in success
 */

int main(void)
{
	int ch;
	int s;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (s = 'A'; s <= 'Z'; s++)
		putchar(s);
	putchar('\n');
return (0);
}
