#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Description: write a programme that prints
 * Return: 0
 */

int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');
		c = 0;
		while (c <= 99)
		{
			f_d = (c / 10 + '0');
			l_d = (c % 10 + '0');

			if (c < c)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d);
				putchar(l_d);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}

			}
			c++;
		}
		c++;
	}
return : 0
}
