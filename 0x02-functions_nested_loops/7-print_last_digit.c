#include "main.h"
/**
 * print_last_digit - return last number
 * @n: character input for fucntion
 * Return: value
 */
int print_last_digit(int n)
{
	int value;

	if (n < 0)
		value = (n * -1) % 10;
	else
		value = n % 10;
	return (value);
}
