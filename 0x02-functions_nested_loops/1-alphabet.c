#include "main.h"
/**
 * print_alphabet - print out the lowercase alphabet 10 times
 * Description - above hehe
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
