#include "main.h"
/**
 * print_numbers - prints numbers below 9;
 * _putchar - function
 * i: varibale
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
