#include "main.h"
#include <stdio.h>
/**
 * print_array - print out only n values of an array
 * i: increment value
 * @a: array
 * @n: limit
 * len: length of half
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	_putchar('\n');
}
