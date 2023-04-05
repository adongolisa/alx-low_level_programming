#include "main.h"

int check_pal(char *y, int i, int len);
int _strlen_recursion(char *y);

/**
 * is_palindrome - checks if a string is a palindrome
 * @y: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *y)
{
	if (*y == 0)
		return (1);
	return (check_pal(y, 0, _strlen_recursion(y)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @y: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *y)
{
	if (*y == '\0')
		return (0);
	return (1 + _strlen_recursion(y + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @y: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *y, int i, int len)
{
	if (*(y + i) != *(y + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(y, i + 1, len - 1));
}

