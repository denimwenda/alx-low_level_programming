#include "main.h"
/**
 * swap_int - that swaps the value of two integers
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */

int swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
