#include <stdio.h>

/**
 * main - Print the digits from 0 to 99.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int tmpU;
	int tmpD;
	int tmpC;

	for (tmpC = '0'; tmpC <= '9'; tmpC++)
	{
		for (tmpD = tmpC + 1; tmpD <= '9'; tmpD++)
		{
			for (tmpU = tmpD + 1; tmpU <= '9'; tmpU++)
			{
				putchar(tmpC);
				putchar(tmpD);
				putchar(tmpU);
				if ((tmpU == '9' && tmpD == '8') && tmpC == '7')
					break;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
