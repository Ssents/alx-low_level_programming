#include "main.h"
/**
 * rev_string - print all string in reversee
 * @s: input varible
 * str: reverse string variable
 * _putchar -print one character at atime
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
		length++;

	char str[length - 1];

	for (length = length - 1; length >= 0; length--)
	{
		str[i] = s[length];
		i++;
	}
	
	while (s[length] != '\0')
	{
		s[length] = str[length];
		length ++;
	}
}
