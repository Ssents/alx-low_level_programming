#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Task 2
 * Description: If else assignment
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("The last digit of %i is %i and is ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5");
	else if (lastDigit == 0)
		printf("0");
	else if (lastDigit < 6 && lastDigit != 0)
		printf("less than 6 and not 0");
	printf("\n");
	return (0);
}

