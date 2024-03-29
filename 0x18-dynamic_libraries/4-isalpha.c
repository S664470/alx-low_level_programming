#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: character to checked
 * File: 4-isalpha.c
 * Auth: Shahi Slola
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
