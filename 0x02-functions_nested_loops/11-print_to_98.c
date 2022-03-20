#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n: value
 * limit: value value
 * new_num: value
 * neg: value
 * _putchar - print out chars
 */

void print_to_98(int n)
{
	int new_num;
	int limit;
	int neg;

	if (n > 98)
	{
		new_num = n;
		limit = 97;
	}
	else
	{
		limit = 99;
		new_num = n;
	}

	do {
		if (new_num < 0)
		{
			_putchar('-');
			neg = -1;
		}
		else
			neg = 1;
		if (new_num >= 100 || new_num <= -100)
			_putchar(((new_num * neg) / 100) + '0');
		if (new_num >= 10 || new_num <= -10)
			_putchar((((new_num * neg) % 100) / 10) + '0');
		_putchar(((new_num * neg) % 10) + '0');
		if (n <= 98)
			new_num++;
		else
			new_num = new_num - 1;
		if (new_num != limit)
		{
			_putchar(',');
			_putchar(' ');
		}
	} while (new_num != limit);
	_putchar('\n');
}
