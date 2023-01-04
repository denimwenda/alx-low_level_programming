#include "main.h"

/**
 * _strchr - function that locates a character in string
 * @s: string
 * @c: character
 *
 * Return: pointer for character c or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
