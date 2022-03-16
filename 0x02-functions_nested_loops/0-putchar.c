#include "main.h"
/**
 * main - Task 0
 * Description - Write a function that returns _putchar
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char data1[] = "_putchar";

	while (data1[i] != '\0')
	{
		_putchar(data1[i]);
		i++;
	}

	return (0);
}
