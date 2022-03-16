#include <unistd.h>
/**
 * Description - header file
 */
char _putchar (char c)
{
	return (write(1, &c, 1));
}
