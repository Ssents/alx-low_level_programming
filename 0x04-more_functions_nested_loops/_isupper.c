#include "main.h"
/**
 * _isupper - checks for upper case
 * @c: input value
 * isupper - value to return
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int isupper;

	isupper = (c >= 65 && c <= 95) || (c >= 'A' && c <= 'Z');
	return (isupper);
}
