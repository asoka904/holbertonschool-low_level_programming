#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: string origin
 * @to: string to change
 */
void set_string(char **s, char *to)
{
	*s = to;
}
