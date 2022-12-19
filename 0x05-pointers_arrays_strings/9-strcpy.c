#include "main.h"
/**
 * _strcpy - copy the string pointed
 * @dest: char
 * @src: char
 * Return: 0 is success
 */

char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
		dest[s] = src[s];
	dest[s] = '\0';
	return (dest);
}
