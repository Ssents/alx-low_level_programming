#include <stdio.h>
/**
 * main - print natural numbers below 1024
 * Description - print first fibonacci numbers
 * i: count variable
 * next: next number
 * prev: number before
 * sum: sum of prev and next
 * Return: always 0
 */

int main(void)
{
	long int i;
	long int next;
	long int prev;
	long int sum;

	prev = 0;
	i = 0;
	next = 1;
	while (next <= 4000000)
	{
		sum = prev + next;
		prev = next;
		next = sum;

		if ((next % 2) == 0)
			i = i + next;
	}
	printf("%lu\n", i);
	return (0);
}
