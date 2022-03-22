#include "main.h"
/**
 * swap_int -function to swap valus
 * @a: input variable
 * @b: another variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	int temp1 = *b;

	*a = temp1;
	*b = temp;
}
