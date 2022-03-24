#include "main.h"
/**
 * puts_half - print out only half of the values
 * i: increment value
 * @str: string value
 * len: length of half
 */

void puts_half(char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 1)
		len = (i + 1) / 2;
	else
		len = i / 2;

	while (len < i)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
