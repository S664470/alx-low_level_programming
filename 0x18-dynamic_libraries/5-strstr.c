#include "main.h"
#include <string.h>

/**
 * *_strstr - function that locates a substring.
 * @haystack: string to be scanned.
 * @needle: small string to be searched
 *
 * File: 5-strstr.c
 * Auth: Shahi Salola
 *
 * Return: small string to be searched
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
