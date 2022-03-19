#include "main.h"
/**
 * times_table - function returns the 9 table
 * i = multiple
 * j - multiple
 * mul - product of i and j
 * _putchar - print out char
 */

void times_table(void)
{
	int i;
	int mul;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			mul = i * j;
			if (mul >= 10)
				_putchar((mul / 10) + '0');
			_putchar((mul % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			j++;
		}

		_putchar('\n');
		i++;
	}
}
