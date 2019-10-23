/**
 * print_name - Prints a name.
 * Description: Print a name using a function received as a parameter
 * @name: String to print.
 * @f: Funtion pointer to the funtion to using
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
