#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int z)
{
	if (z < 0)
		return (-1);
	if (z == 0)
		return (1);
	return (z * factorial(z - 1));
}

