#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @size: int
 * @c: char
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int d;

	if (size == 0)
		return (NULL);

	b = malloc(sizeof(c) * size);

	if (b == NULL)
		return (NULL);

	for (d = 0; d < size; d++)
		b[d] = c;

	return (b);
}
