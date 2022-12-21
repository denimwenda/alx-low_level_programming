#include "main.h"
/**
 * _strcat - concatenates two strings
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
		*src = *dest;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s);
}
