#include <stdio.h>

/**
 * main - Print the digits from 0 to 99.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int tmpD;
	int tmpU;

	for (tmpD = '0'; tmpD <= '9'; tmpD++)
	{
		for (tmpU = tmpD + 1; tmpU <= '9'; tmpU++)
		{
			putchar(tmpD);
			putchar(tmpU);
			if (tmpD == '8' && tmpU == '9')
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
