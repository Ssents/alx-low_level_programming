#include "main.h"
/**
 * _atoi - write a fucntion that changes a char to int
 * Return: int
 * @s: char or string
 * int res: variable
 * int sign; + or -
 */

int _atoi(char *s)
{
	int res = 0;
	int i = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		res = res * 10 + str[i] - '0';
	}

	return (sign * res);
}
