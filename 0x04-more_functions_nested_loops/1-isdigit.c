#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: input value
 * isupper - value to return
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int isdigit;

	isdigit = (c >= 0 && c <= 9);
	return (isdigit);
}
