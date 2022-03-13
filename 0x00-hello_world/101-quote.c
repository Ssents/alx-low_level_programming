#include <stdio.h>
/**
 * main - entry point
 * Description - print stuff out without using printf and puts
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char data[] = "and that piece of art is useful\", - Dora Korpar, 2015-10-19";
	int length = sizeof(data);
	int i;

	for (i = 0; i < length; i++)
	{
		putchar(data[i]);
	}

	return (1);
}
