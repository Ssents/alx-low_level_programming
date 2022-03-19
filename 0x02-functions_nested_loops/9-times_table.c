#include "main.h"
/**
 * times_table - function returns the 9 table
 * i = multiple
 * j - multiple
 * _putchar - print out char
 */

void times_table(void)
{
	int i;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			if (i * j >= 10)
				_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			j++;
		}

		_putchar('$');
		_putchar('\n');
		i++;
	}
}
