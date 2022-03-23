#include "main.h"
/**
 * print_rev - print all string in reversee
 * _strlen - get length of string
 * s: input varible
 * _putchar -print one character at atime
 */
void print_rev(char *s)
{
	int length = 0;
	int last = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	last = s + length;
	while (length != 0)
	{
		_putchar(*last);
		last--;
		length--;
	}
	_putchar('\n');
}
