<<<<<<< Updated upstream
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number.
 * @m: another.
 * Return: number of bit to flip from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int pichu = 0;
	int len = (sizeof(num) * 8);

	while (len >= 0)
	{
		if (num & 1)
			pichu++;
		num = num >> 1;
		len--;
	}
	return (pichu);
=======
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * You are not allowed to use the % or / operators
 * @n: Number Input 1.
 * @m: Number Input 2.
 * Return: Number of flip in the Input numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flip = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
			flip += 1;
	}
	return (flip);
>>>>>>> Stashed changes
}
