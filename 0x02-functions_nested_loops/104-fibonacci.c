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
	int i;
	long int next;
	long int prev;
	long int sum;

	prev = 0;
	i = 0;
	next = 1;
	while (i < 98)
	{
		sum = prev + next;
		printf("%lu", sum);
		prev = next;
		next = sum;
		if (i != 98)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
