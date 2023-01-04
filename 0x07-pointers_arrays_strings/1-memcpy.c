#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b = 0;

	while (b < n)
	{
		dest[b] = src[b];
		b++;
	}
	return (dest);
}
