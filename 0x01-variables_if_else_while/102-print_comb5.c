#include <stdio.h>

/**
 * main - Task 9
 * Description: Print single digit combinations
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (l <= k && j <= i)
					{
						putchar(l + '0');
						putchar(k + '0');
						putchar(' ');
						putchar(j + '0');
						putchar(i + '0');
					}


					if (i == 9 && j == 8 && k == 9 && l == 9)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
