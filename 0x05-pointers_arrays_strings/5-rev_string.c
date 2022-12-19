#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string character
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0, l, k;
	char d;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (l = 0; k >= o && l < k; k--, l++)
	{
		u = s[l];
		s[l] = s[k];
		s[k] = u;
	}
}
