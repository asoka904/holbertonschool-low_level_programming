#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers
 * Description: Prints the numbers passed as a parameters, separated by the
 * string *separator
 * @separator: String to put in middle of the numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if ((i + 1) < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
