#include <stdio.h>
/**
 * main - Task 12
 * Description - Two digit number combinations
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a < b)
			{
				if (a < 10)
					putchar('0');
				putchar(a + '0');
				putchar(' ');

				if (b < 10)
					putchar('0');
				putchar(b + '0');
				if (a == 98 && b == 99)
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
	putchar('\n');
	return (0);
}
