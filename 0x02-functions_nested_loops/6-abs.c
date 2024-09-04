#include <stdlib.h>
#include "main.h"

/**
 * int _abs -  computes the absolute value of an integer
 * @n: intger to get its abs
 * Return: The abs of intger
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	} else
		return (-n);
}
