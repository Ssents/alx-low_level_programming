#include <stdio.h>

/**
 * main - task 8
 * Description - print the first base 16 numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int num1;
	char hexNumber;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			hexNumber = i + '0';
		else
		{
			num1 = i % 10;
			hexNumber = 'a' + num1;
		}
		putchar(hexNumber);

	}
	putchar('\n');
	return (0);
}
