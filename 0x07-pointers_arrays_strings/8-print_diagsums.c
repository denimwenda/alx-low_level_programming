#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int w, x, y, z = 0, s = 0;

	for (w = 0; w < size; w++)
	{
		p = (w * size) + w;
		l += *(a + y);
	}
	for (x = 0; x < size; x++)
	{
		p = (x * size) + (size - 1 - x);
		s += *(a + y);
	}
	printf("%i, %i\n", z, s);
}
