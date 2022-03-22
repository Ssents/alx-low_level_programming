#include "main.h"
/**
 * reset_to_98 -function to swap valus
 * @a: input variable
 * @temp: temporary value
 * temp1: variable
 * @b: another variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	int temp1 = *b;

	*a = temp1;
	*b = temp;
}
