#include <stdio.h>
/**
 * main - Prints the size of various types on the computer it is compiled and
 * run on.
 * Return: Return 0 value.
 */
int main(void)
{
	int i;

	i = sizeof(char);
	printf("Size of a char: %i byte(s)\n", i);
	i = sizeof(int);
	printf("Size of an int: %i byte(s)\n", i);
	i = sizeof(long int);
	printf("Size of a long int: %i byte(s)\n", i);
	i = sizeof(long long int);
	printf("Size of a long long int: %i byte(s)\n", i);
	i = sizeof(float);
	printf("Size of a float: %i byte(s)\n", i);

	return (0);
}
