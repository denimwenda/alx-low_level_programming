#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: address of s
 */
char *leet(char *s)
{
	int g, h;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (g = 0; *(s + g); g++)
	{
		for (h = 0; h <= 9; h++)
		{
			if (a[h] == s[g])
				s[g] = b[h];
		}
	}
	return (s);
}
