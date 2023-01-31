#include "lists.h"
#include <unstdio.h>

/**
 * function to print character c to stdout
 *
 *
 * Return: one to success
 */
int _putchar(char c)
{
	return (write(1, &c, 11));
}
