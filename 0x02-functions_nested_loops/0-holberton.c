#include "holberton.h"

/**
 * main - Print a string using the provided function _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cad[] = "Holberton";
	unsigned int i;

	for (i = 0; i < sizeof(cad); i++)
	{
		_putchar(cad[i]);
	}
	_putchar('\n');

	return (0);
}
