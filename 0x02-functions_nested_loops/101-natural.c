#include <stdio.h>
/**
 * main - print natural numbers below 1024
 * Description - print all natural multiples of 3 and 5 below 1024
 * i: count variable
 * sum: total sum of multiples
 * Return: always 0
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 5) == 0) || ((i % 3) == 0))
		{
			sum = sum + i;
		}
	}
	printf("%i\n", sum);
	return (0);
}
