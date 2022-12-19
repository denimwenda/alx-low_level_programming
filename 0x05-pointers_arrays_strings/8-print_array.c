#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array
 * @a: first int
 * @n: second int
 * Return: 0 is success
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
		if (d != n - 1)
			printf("%d, ", a[d]);
		else
			printf("%d", a[d]);
	printf("\n");
}
