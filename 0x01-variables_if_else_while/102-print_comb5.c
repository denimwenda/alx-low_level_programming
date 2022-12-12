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
		c2 = 0;
		while (c2 <= 99)
		{
			f_d2 = (c / 10 + '0');
			l_d2 = (c % 10 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}

			}
			c2++;
		}
		c++;
	}
return : 0
}
