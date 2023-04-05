#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @z: number to return the factorial from
 *
 * Return: factorial of z
 */
int factorial(int z)
{
	if (z < 0)
		return (-1);
	if (z == 0)
		return (1);
	return (z * factorial(z - 1));
}

