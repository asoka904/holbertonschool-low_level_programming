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
	char opt;

	va_start(list, format);

	while (format[i] != '\0' && format != NULL)
	{
		opt = format[i];
		switch (opt)
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
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
		}

		if (format[i + 1] && (opt == 'c' || opt == 'i' || opt == 'f' || opt == 's'))
			printf(", ");
		i++;
	}

	printf("\n");
}


