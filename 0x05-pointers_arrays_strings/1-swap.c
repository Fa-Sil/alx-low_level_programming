#include "main.h"
/**
 * swap_int - a function to swap two numbers
 *
 * @a: first param
 * @b: second param
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

