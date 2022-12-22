#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a:array
 * @n:integer
 */
void reverse_array(int *a, int n)
{
	int d, f;

	for (d = 0; (d < (n - 1) / 2); d++)
	{
		f = a[d];
		a[d] = a[n - 1 - d];
		a[n - 1 - d] = f;
	}
}
