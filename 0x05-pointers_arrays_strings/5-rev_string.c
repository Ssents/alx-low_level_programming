#include "main.h"
/**
 * rev_string - print all string in reversee
 * @s: input varible
 * a: another temporary variable
 * i: incremental variable
 * _putchar -print one character at atime
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	int a;

	while (s[length] != '\0')
		length++;

	while (i < length)
	{
		a = s[i];
		s[i] = s[length];
		s[length] = a;

		i++;
		length--;
	}
}
