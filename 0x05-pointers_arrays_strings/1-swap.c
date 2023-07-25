#include "main.h"
/**
 * swap_int(int *a, int *b) - a function to swap two numbers
 *
 * @a: first param
 * @b: second param
 */
swap_int(int *a, int *b)
{
	*a = b;
	b = &a;
}

