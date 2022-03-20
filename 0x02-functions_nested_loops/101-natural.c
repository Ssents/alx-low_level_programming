#include <stdio.h>
#include "main.h"
/**
 * natural_b1024 - print natural numbers below 1024
 * i: count variable
 */

void natural_b1024(void)
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
}
