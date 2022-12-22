#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s:string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int c = 0, f;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + c))
	{
		if (*(s + c) >= 'a' && *(s + c) <= 'z')
		{
			if (c == 0)
				*(s = c) -= 'a' - 'A';
			else
			{
				for (f = 0; f <= 12; f++)
				{
					if (a[f] == *(s + c - 1))
						*(s + c) -= 'a' - 'A';
				}
			}
		}
		C++;
	}
	return (s);
}
