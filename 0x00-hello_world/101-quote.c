#include <stdio.h>
/**
 * main - entry point
 * Description - print stuff out without using printf and puts
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char data1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int length1 = sizeof(data1);
	int i;

	for (i = 0; i < length1; i++)
	{
		putchar(data1[i]);
	}
	putchar('\n');

	return (1);
}
