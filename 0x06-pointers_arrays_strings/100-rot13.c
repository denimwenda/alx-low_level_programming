#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
	int z, y;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (z = 0; *(s + z); z++)
	{
		for (y = 0; y < 52; y++)
		{
			if (a[y] == *(s + z))
			{
				*(s + z) = b[y];
				break;
			}
		}
	}
	return (s);
}
