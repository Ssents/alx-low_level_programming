#include "main.h"
/**
 * _abs - return absolute value
 * @n: character input for fucntion
 * Return: value
 */
int _abs(int n)
{
	int value;

	if (n < 0)
		value = n * -1;
	else
		value = n;
	return (value);
}
