#include <unistd.h>
#include <stdio.h>

/**
 * main - entry point
 * Description:  prints the alphabet in lowercase, followed by a new line
 * Return: (0) in success
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	putchar('\n');
return (0);
}
