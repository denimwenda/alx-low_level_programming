#include "main.h"
/**
 * *_strcat - appends src string to the dest string
 * @dest:char
 * @src:char
 * return: char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		d++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
