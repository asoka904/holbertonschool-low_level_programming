#include <stdio.h>

/**
 * main - Print the digits from 0 to 99.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int tmpU1 = '1';
	int tmpU2 = '0';
	int tmpD1 = '0';
	int tmpD2 = '0';

	for (tmpD2 = '0'; tmpD2 <= '9'; tmpD2++)
	{
		for (tmpU2 = '0'; tmpU2 <= '9'; tmpU2++)
		{
			for (; tmpD1 <= '9'; tmpD1++)
			{
				for (; tmpU1 <= '9'; tmpU1++)
				{
					putchar(tmpD2);
					putchar(tmpU2);
					putchar(' ');
					putchar(tmpD1);
					putchar(tmpU1);

					if (tmpD2 == '9' && tmpU2 == '8')
						break;
					putchar(',');
					putchar(' ');
				}
				tmpU1 = '0';
			}
			if (tmpD2 == '9')
			{
				if (tmpU2 == '8')
				{
					break;
				}
				else
				{
					tmpU1 = tmpU2 + 2;
					tmpD1 = '9';
				}
			}
			else
			{
				if (tmpU2 == '9')
				{
					tmpD1 = tmpD2 + 1;
					tmpU1 = '1';
				}
				else
				{
					tmpD1 = tmpD2;
					tmpU1 = tmpU2 + 2;
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
