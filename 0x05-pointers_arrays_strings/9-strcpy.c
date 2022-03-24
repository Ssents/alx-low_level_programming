#include "main.h"
/**
 * _strcpy - copy src to desc
 * @src: source data
 * @dest: data destination
 * i: increment
 * Return: chars in dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
