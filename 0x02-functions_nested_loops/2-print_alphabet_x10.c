#include "main.h"
/**
 * print_alphabet_x10 - print out the lowercase alphabet 10 times
 * Description - above hehe
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
		letter = 'a';
	}
}
