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

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && i < k && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i != 7 && j != 8 && k != 9)
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
