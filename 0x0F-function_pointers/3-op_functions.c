#include "3-calc.h"

/**
 * op_add - Sum two integers
 * @a: First operand
 * @b: Second operand.
 *
 * Return: Returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Rest two integers
 * @a: First operand
 * @b: Second operand.
 *
 * Return: Returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiply two integers
 * @a: First operand
 * @b: Second operand.
 *
 * Return: Returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divide two integers
 * @a: First operand
 * @b: Second operand.
 *
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - Divide two integers and return the moddule
 * @a: First operand
 * @b: Second operand.
 *
 * Return: the module of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

