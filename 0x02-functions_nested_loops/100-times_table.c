#include "main.h"
/**
 * print_times_table - function returns the 9 table
 * @n: variable
 * i = multiple
 * j - multiple
 * mul - product of i and j
 * _putchar - print out char
 */

void print_times_table(int n)
{
	int i;
	int mul;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				mul = i * j;
				if (mul >= 100)
					_putchar(((mul % 1000) / 100) + '0');
				if (mul >= 10)
					_putchar(((mul % 100) / 10) + '0');
				_putchar((mul % 10) + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					mul = i * (j + 1);
					if (mul < 100)
						_putchar(' ');
					if (mul < 10)
						_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
