#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argv: int
 * @argc: int
 * Return: 0
 */
int main(int argc, char **argv)
{
	int b;

	for (b = 0; b < argc; b++;)
		printf("%s\n", argv[b]);

	return (0);
}
