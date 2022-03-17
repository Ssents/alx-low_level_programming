#include "main.h"
/**
 * _islower - checks if character is of lower case and uppercase
 * @c: character input for fucntion
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int lowercase = c >= 97 && c <= 122;
	int uppercase = c >= 65 && c <= 90;

	return (lowercase || uppercase);
}
