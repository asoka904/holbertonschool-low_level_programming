#include "variadic_functions.h"
/**
 * print_all - Prints anything.
 * Description: Prints the list of arguments passed, that can be of type char,
 * integer, float or string. The format of every parameter is indicated as a
 * list (string) in the first parameter.
 * @format: String that contains a list of types of arguments passed to the
 * function.
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list list;
	char *s;

	if (format == NULL || format == '\0')
		return;

	va_start(list, n);
	while ()


	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		else
			printf("\n");
	}
	va_end(list);
}


void print_char(char c, void *p)
{
	printf("%c", c);
}


void print_int()
{
}


void print_float()
{
}


void print_string()
{
}
