#include "main.h"
#define _putchar

/**
 * main - Task 0 putchar
 * Description - print _putchar
 * Return: 0
 */

int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}

	return (0);
}
