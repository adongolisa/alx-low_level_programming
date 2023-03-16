# include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of a an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));     
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %ld byte(s)\n", sizeof(char));
    printf("Size of an int: %ld byte(s)\n", sizeof(int));
    printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of a float: %ld byte(s)\n", sizeof(float));
    return (0);
}
