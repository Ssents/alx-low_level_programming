#include "main.h"
/**
 * print_rev - print all string in reversee
 * _strlen - get length of string
 * s: input varible
 * _putchar -print one character at atime
 */
void print_rev(char *s)
{
	int length = _strlen(*s);
	int *last;

	last = s + length;
	while (length != 0)
	{
		_putchar(*last);
		last--;
		length--;
	}
	_putchar('\n');
}
