#include "main.h"
/**
 * swap_int - that swaps the value of two integers
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */

void swap_int(void *a, void *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
