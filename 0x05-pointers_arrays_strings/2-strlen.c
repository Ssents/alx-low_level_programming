#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string c
 * len: int length
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '0')
	{
		len++;
		s++;
	}
	return (len);
}
