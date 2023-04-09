#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void	
 */
char *_strcat(char *dest, char *src)
{
	int y;
	int j;


	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[y] = src[j];
		y++;
		j++;
	}		


	dest[y] = '\0';
	return (dest);
}

