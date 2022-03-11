#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - task 2
 * Description: return alphabet in small case
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
