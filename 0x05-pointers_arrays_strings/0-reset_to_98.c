#include "main.h"
/**
 * reset_to_98 -functions changes value to 98
 * @n: input variable
 * *p: pointer
 */

void reset_to_98(int n)
{
	int *p;
	
	p = &n;
	*p = 98;
}
