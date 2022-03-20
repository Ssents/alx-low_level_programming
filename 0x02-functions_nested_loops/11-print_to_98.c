#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n: value
 * limit: value value
 * new_num: value
 * _putchar - print out chars
 */

void print_to_98(int n)
{
	int new_num;
	int limit;

	if (n >= 98)
	{
		new_num = 98;
		limit = 97;
	}
	else
	{
		limit = 99;
		new_num = n;
	}

	do {
		if (new_num >= 100)
			_putchar((new_num / 100) + '0');

		if (new_num >= 10)
			_putchar(((new_num % 100) / 10) + '0');

		_putchar((new_num % 10) + '0');
		_putchar(',');
		_putchar(' ');

		if (n < 98)
			new_num++;
		else if (n == 98)
			new_num = 98;
		else
			new_num = n - 1;

	} while (new_num != limit);
	_putchar('\n');
}