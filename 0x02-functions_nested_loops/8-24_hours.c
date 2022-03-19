#include "main.h"
/**
 * jack_bauer - returns all minutes in 24 hours
 * i1 = int value
 * j1 - int value
 * i2 - int vaalue
 * j2 - int value
 */

void jack_bauer(void)
{
	int i1;
	int i2;
	int j1;
	int j2;

	while (i1 <= 2)
	{
		int i2 = 0;

		while (i2 <= 9)
		{
			int j1 = 0;

			while (j1 <= 5)
			{
				int j2 = 0;

				while (j2 <= 9)
				{
					_putchar(i1 + '0');
					_putchar(i2 + '0');
					_putchar(':');
					_putchar(j1 + '0');
					_putchar(j2 + '0');
					_putchar('\n');

					j2++;
				}
				j1++;
			}
			i2++;
		}
		i1++;
	}
}
