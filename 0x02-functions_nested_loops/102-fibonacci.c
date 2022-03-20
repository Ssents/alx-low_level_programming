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
	int next;
	int prev;
	int sum;

	prev = 0;
	i = 0;
	while (i < 50)
	{
		sum = prev + next;
		printf("%i", sum);
		prev = next;
		next = sum;
		if (i != 49)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
