#include "holberton.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the input string
 *
 * Return: Pointer to the string changed.
 */
char *cap_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		switch (s[len - 1])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case 63:
			case '!':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[len] >= 'a' && s[len] <= 'z')
					s[len] -= ' ';
				break;
		}
		len++;
	}
	return (s);
}
