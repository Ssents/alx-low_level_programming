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

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		for (j = i + 1; j <= 9; j++)
		{
			if (j != i)
				putchar(j + '0');
			else if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
