#include "main.h"
/**
 * print_line - prints numbers below 9;
 * _putchar - function
 * @n: variable
 * i: varibale
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
