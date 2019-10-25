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

	if (n == 0)
		return;

	va_start(list, n);
	printf("%i", va_arg(list, int));
	if (separator != NULL)
		for (i = 1; i < n; i++)
			printf("%s%i", separator, va_arg(list, int));
	else
		for (i = 1; i < n; i++)
			printf("%i", va_arg(list, int));
	printf("\n");
	va_end(list);
}
