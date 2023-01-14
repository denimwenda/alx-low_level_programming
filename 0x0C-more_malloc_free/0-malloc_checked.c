#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: int
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *r;

	r = malloc(b);

	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
