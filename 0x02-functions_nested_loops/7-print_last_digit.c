#include "main.h"
/**
 * print_last_digit - return last number
 * _putchar - returna character
 * @n: character input for fucntion
 * ni - converted value
 * value - last digit
 * Return: value
 */
int print_last_digit(int n)
{
	int value;
	int ni = n;

	if (ni < 0)
		value = (ni * -1) % 10;
	else
		value = ni % 10;
	_putchar(value);
	return (value);
}
