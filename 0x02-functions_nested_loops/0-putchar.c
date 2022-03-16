#include "main.h"
#ifndef _putchar
#define _putchar
/**
 * main - Task 1
 * Description - print _putchar
 * Return - 0
 */
int main(void)
{
	char data[] = "_putchar";
	int dl = sizeof(data);
	int i;
	char t = "i";

	for (i = 0; i < dl; i++)
	{
		_putchar(t);
	}
	
	_putchar('\n');
	return (0);
}
#endif
