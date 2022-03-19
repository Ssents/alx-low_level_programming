#include "main.h"
/**
 * print_last_digit - return last number
 * _putchar - returna character
 * @n: character input for fucntion
 * value - last digit
 * Return: value
 */
int print_last_digit(int n)
{
	int value;

	if (n < 0)
		value = (n * -1) % 10;
	else
		value = n % 10;

	_putchar(value + '0');
	return (value);
}
