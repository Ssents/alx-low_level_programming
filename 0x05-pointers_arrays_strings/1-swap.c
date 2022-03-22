#include "main.h"
/**
 * reset_to_98 -function to swap valus
 * @a: input variable
 * @temp: temporary value
 * @b: another variable
 */

void swap_int(int *a, int *b)
{
	int *temp = *a;

	*a = b;
	*b = temp;
}
