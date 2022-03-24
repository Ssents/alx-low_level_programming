#include "main.h"
/**
 * puts2 - prints our n+2 numbers
 * _putchar - prints out characters
 * @str: string input
 * i: string indice
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
