#include "main.h"

int actual_sqrt_recursion(int x, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @x: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (actual_sqrt_recursion(x , 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @x: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (actual_sqrt_recursion(x, i + 1));
}

