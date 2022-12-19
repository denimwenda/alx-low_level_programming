#include "main.h"
/**
 * _atoi - Convert a string to an integer
 * @s: pointer to convert
 * Return: An integer
 */
int _atoi(char *s)
{
	int h = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;


	while (s[h])
	{
		if (s[h] == 45)
		{
			min *= -1;
		}
		while (s[h] >= 48 && s[h] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[h] - '0');
			h++;
		}
		if (isi == 1)
		{
			break;
		}
		h++;
	}
	ni *= min;
	return (ni);
}
