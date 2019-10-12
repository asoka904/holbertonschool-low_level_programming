#include "holberton.h"

/**
 * is_palindrome - check if a string is palindrome or not
 * @s: Input string.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (palindrome_aux(s, s + len - 1));
}


/**
 * palindrome_aux - Check if a substring is a palindrome (Auxiliar function)
 * @s: Input string
 * @
 */


/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String
 *
 * Return: length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
