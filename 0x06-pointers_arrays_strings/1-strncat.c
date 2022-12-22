#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	for (c = 0; dest[c] != '\0'; c++)
	{
		continue;
	}
	for (d = 0; src[d] != '\0' && d < n; d++)
	{
		dest[c + d] = src[d];
	}
	dest[c + d] = '\0';
	return (dest);
}
