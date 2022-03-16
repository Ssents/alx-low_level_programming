#include <unistd.h>
#ifndef _putchar
#define _putchar
/**
 * description - custom header file
 * _putchar - puts the character c in the stdout
 * @c - character to be printed
 * Return - on success 1
 * on error, -1 is returned, and errno is identified
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}

#endif
