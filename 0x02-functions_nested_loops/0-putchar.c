#include "main.h"
/**
 * main - Task 0 putchar
 * Description - print _putchar
 * Return: 0
 */
int main(void)
{
	char data[] = "_putchar";
	int i = 0;

	while (data[i] != '\0')
	{
		_putchar(data[i]);
	}
}
