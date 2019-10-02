#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: Pointer to string.
 */

void rev_string(char *s)
{
	int a = 0, b;
	char tmp;

	while (s[a] != '\0')
	{
		a++;
	}
	b = 0;
	a--;

	while (b <= a)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
		a--;
		b++;
	}

}
