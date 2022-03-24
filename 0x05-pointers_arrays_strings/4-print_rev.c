#include "main.h"
/**
 * print_rev - print all string in reversee
 * @s: input varible
 * _putchar -print one character at atime
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++;

	while (length != 0)
	{
		_putchar(*(s[length]));
		length--;
	}
	_putchar('\n');
}
