#include "main.h"

/**
 * swap_int - its interchanges an integer value passed to it
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
