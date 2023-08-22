#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: integer one 
 * @b: integerr two
 */
void swap_int(int *a, int *b)
{

	int c = *a;
	*a = *b;
	*b = c;
}
