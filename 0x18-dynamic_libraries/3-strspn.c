#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: string containing the list of characters
 *
 * File: 3-strspn.c
 * Auth: Shahi Salola
 *
 * Return: number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
