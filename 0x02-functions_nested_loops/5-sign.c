#include "main.h"
/**
 * print_sign - checks the value of the input
 * @value - return value for function
 * _putchar - prints out characters
 * @n: character input for fucntion
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		value = 0;
	else
	{
		_putchar('-');
		value = -1;
	}
	return (value);
}
