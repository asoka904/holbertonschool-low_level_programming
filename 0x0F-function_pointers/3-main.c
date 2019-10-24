#include "3-calc.h"
/**
 * main - Performs simple operations.
 * Description: Realice the basic operations (+, -, *, /, %) between two
 * integers
 * @argc: number of arguments
 * @argv: Arguments of the function: two integers and the operator
 *
 * Return: 0 if succes. In case of error, return whit exit code:
 * 98: wrong number of arguments
 * 99: wrong operator
 * 100: try divide by 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);
	char* operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);
	operation = get_op_func(operator);
	result = (*operation)(a, b);
	printf("%i\n", result);

	return (0);
}
