#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * Description: Prints the strings passed as a parameters, separated by the
 * string *separator
 * @separator: String to put in middle of the strings ingressed
 * @n: Number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
