#include "main.h"
/**
 * print_last_digit - return last number
 * _putchar - returna character
 * @n: character input for fucntion
 * ni - converted value
 * ascii_val -int value for chars
 * value - last digit
 * Return: value
 */
int print_last_digit(int n)
{
	int value;
	int ni = n;
	int ascii_val;

	if (ni < 0)
		value = (ni * -1) % 10;
	else
		value = ni % 10;

	if (value >= 'A' && value <= 'z')
	{
		for (ascii_val = 65; ascii_val <= 122; ascii_val++)
		{
			if (ascii_val == ni * 1)
				value = ascii_val % 10;
		}
	}

	_putchar((int)(value + '0'));
	return (value);
}
