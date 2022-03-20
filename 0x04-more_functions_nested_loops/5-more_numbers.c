#include "main.h"
/**
 * more_numbers - prints numbers below 9;
 * _putchar - function
 * i: varibale
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar(i + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
