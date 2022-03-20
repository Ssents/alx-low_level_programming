#include <stdio.h>
/**
 * main - print natural numbers below 1024
 * Description - print all natural multiples of 3 and 5 below 1024
 * i: count variable
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 5) == 0) || ((i % 3) == 0))
		{
			printf("%i", i);
			if (i != 1023)
				printf(", ");
		}
	}
	putchar('\n');

	return (0);
}
