#include "main.h"
#include <string.h>

/**
 * *_memcpy - function that copies memory area.
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: number of bytes
 *
 * File: 1-memcpy.c
 * Auth: Shahi Salola
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
