#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Discription: print if the number is posative or negative
 * Return: 0 allways
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is posative \n", n);
	else if (n == 0)
		printf("%d is zero \n", n);
	else if (n < 0)
		printf("%d is negative \n", n);
	return (0);
}
