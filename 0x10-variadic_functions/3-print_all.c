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
	int i = 0;
	va_list list;
	char *s;
	char option;

	if (format == NULL || format == '\0')
		return;

	va_start(list, format);

	while (format[i] != '\0')
	{
		option = format[i];
		switch (option)
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}

		if (format[i + 1] &&
			(option == 'c' || option == 'i' || option == 'f' || option == 's'))
			printf(", ");
		i++;
	}

	printf("\n");
}


