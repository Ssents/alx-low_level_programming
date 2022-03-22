#include "main.h"
/**
 * _puts - prints out a string
 * _putchar - function that prints chars
 * @str: string char
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
