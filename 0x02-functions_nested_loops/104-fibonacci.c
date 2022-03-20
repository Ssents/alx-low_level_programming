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
	long int front;
	long int back;
	long int max = 10 ^ 19;

	prev = 0;
	i = 0;
	next = 1;
	front = 0;
	back = 0;
	while (i < 98)
	{
		if ((prev + next < max))
		{
			sum = prev + next;
			printf("%lu", sum);
			prev = next;
			next = sum;
		}
		if (i != 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
