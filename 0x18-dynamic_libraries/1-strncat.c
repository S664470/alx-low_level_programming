#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * File: 1-strncat.c
 * Auth: Shahi Salola
 *
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
