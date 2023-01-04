#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: longer string
 * @needle: substring
 * Return: pointer to beginning of neddle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int c = 0, d = 0;

	while (haystack[c])
	{
		while (needle[d] && (haystack[c] == needle[0]))
		{
			if (haystack[c + d] == needle[d])
				d++;
			else
				break;
		}
		if (needle[d])
		{
			c++;
			d = 0;
		}
		else
			return (haystack + c);
	}
	return (0);
}
